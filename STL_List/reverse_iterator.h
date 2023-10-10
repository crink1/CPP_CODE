#pragma once
#include"List.h"

template<class iterator, class Ref, class Ptr>
class Reverseiterator
{
public:
	typedef Reverseiterator<iterator, Ref, Ptr> reverse_iterator;
	Reverseiterator(iterator it)
		:_it(it)
	{}

	reverse_iterator& operator++()
	{
		--_it;
		return *this;
	}

	reverse_iterator& operator--()
	{
		++_it;
		return *this;
	}
	Ref operator*()
	{
		return *_it;
	}
	Ptr operator->()
	{
		return _it.operator->();
	}

	bool operator!=(const reverse_iterator& rit)
	{
		return _it != rit._it;
	}

private:
	iterator _it;
};
