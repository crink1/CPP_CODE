#pragma once
#include"bitset.h"

struct BKDRHash
{
	size_t operator()(const string& key)
	{
		
		size_t hash = 0;
		for (auto e : key)
		{
			hash *= 31;
			hash += e;
		}

		return hash;
	}
};

struct APHash
{
	size_t operator()(const string& key)
	{
		size_t hash = 0;
		for (size_t i = 0; i < key.size(); i++)
		{
			char ch = key[i];
			if ((i & 1) == 0)
			{
				hash ^= ((hash << 7) ^ ch ^ (hash >> 3));
			}
			else
			{
				hash ^= (~((hash << 11) ^ ch ^ (hash >> 5)));
			}
		}
		return hash;
	}
};

struct DJBHash
{
	size_t operator()(const string& key)
	{
		size_t hash = 5381;
		for (auto ch : key)
		{
			hash += (hash << 5) + ch;
		}
		return hash;
	}
};

template<size_t N, class K = string, class hashfun1 = BKDRHash, class hashfun2 = APHash, class hashfun3 = DJBHash>
class BloomFilter
{
public:
	void Set(const K& k)
	{
		int hash1 = hashfun1()(k) % N;
		int hash2 = hashfun2()(k) % N;
		int hash3 = hashfun3()(k) % N;
		_bit.set(hash1);
		_bit.set(hash2);
		_bit.set(hash3);
	}

	bool Test(const K& k)
	{
		int hash1 = hashfun1()(k) % N;
		int hash2 = hashfun2()(k) % N;
		int hash3 = hashfun3()(k) % N;

		if (_bit.test(hash1) == false)
		{
			return false;
		}
		if (_bit.test(hash2) == false)
		{
			return false;
		}

		if (_bit.test(hash3) == false)
		{
			return false;
		}
		return true;
	}
private:
	crin::bitset<N> _bit;
};