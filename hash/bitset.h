#pragma once
namespace crin
{
	template<size_t N>
	class bitset
	{
	public:
		bitset()
		{
			_bits.resize((N >> 5) + 1, 0);
		}

		void set(size_t x)
		{
			size_t i = x / 32;
			size_t j = x % 32;
			_bits[i] |= (1 << j);
		}

		void reset(size_t x)
		{
			size_t i = x / 32;
			size_t j = x % 32;
			_bits[i] &= ~(1 << j);
		}

		bool test(size_t x)
		{
			size_t i = x / 32;
			size_t j = x % 32;
			return _bits[i] & (1 << j);
		}

	private:
		vector<int> _bits;
	};


	template<size_t N>
	class twobitset
	{
	public:
		void set(size_t x)
		{
			if (_bit1.test(x) == false && _bit2.test(x) == false)
			{
				_bit2.set(x);
			}
			else if (_bit1.test(x) == false && _bit2.test(x) == true)
			{
				_bit1.set(x);
				_bit2.reset(x);
			}
			else if (_bit1.test(x) == true && _bit2.test(x) == false)
			{
				//_bit1.set(x);
				_bit2.set(x);
			}

		}

		void print()
		{
			for (int i = 0; i < N; i++)
			{
				if (_bit1.test(i) == false && _bit2.test(i) == true)
				{
					cout << "1->" << i << endl;
				}
				if (_bit1.test(i) == true && _bit2.test(i) == false)
				{
					cout << "2->" << i << endl;
				}
			}
			cout << endl;
		}
	private:
		bitset<N> _bit1;
		bitset<N> _bit2;

	};
}