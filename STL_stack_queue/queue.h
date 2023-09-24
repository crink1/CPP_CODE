#pragma once
#include<list>
#include<deque>

namespace crin
{
	template<class T, class Container = deque<T>>
	class queue
	{
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}
		void pop()
		{
			_con.pop_back();
		}
		const T& front() const
		{
			return _con.front();
		}
		const T& back() const
		{
			return _con.back();
		}
		bool empty() const
		{
			return _con.empty();
		}
		size_t size() const
		{
			return _con.size();
		}


	private:
		Container _con;
	};
}
