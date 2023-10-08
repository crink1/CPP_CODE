#pragma once
#include<vector>


namespace crin
{
	template<class T>
	class less
	{
	public:
		bool operator()(const T& x, const T& y)
		{
			return x < y;
		}
	};
	template<class T>
	class greater
	{
	public:
		bool operator()(const T& x, const T& y)
		{
			return x > y;
		}
	};

	template<class T, class container = vector<T>, class compare = less<T>>
	class priority_queue
	{
	public:
		priority_queue()
		{}

		template<class InputIterator>
		priority_queue(InputIterator begin, InputIterator end)
			:_con(begin,end)
		{
			for (int i = (_con.size() - 2) / 2; i >= 0; i--)
			{
				adjust_down(i);
			}
		}
		compare com;
		void adjust_up(int child)
		{
			size_t parent = (child - 1) / 2;
			while (child > 0)
			{
				if (com(_con[parent], _con[child]))
				{
					swap(_con[parent], _con[child]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else
				{
					break;
				}
			}
		}
		void adjust_down(int parent)
		{
			size_t child = parent * 2 + 1;
			while (child < _con.size())
			{
				if (child + 1 < _con.size() && com(_con[child], _con[child + 1]))
				{
					child++;
				}
				if (com(_con[parent], _con[child]))
				{
					swap(_con[child], _con[parent]);
					parent = child;
					child = parent * 2 + 1;
				}
				else
				{
					break;
				}
			}

		}
		void push(const T& x)
		{
			_con.push_back(x);
			adjust_up(_con.size() - 1);
		}
		void pop()
		{
			swap(_con[0], _con[size() - 1]);
			_con.pop_back();
			adjust_down(0);
		}

		bool empty() const
		{
			return _con.empty();
		}

		size_t size() const
		{
			return _con.size();
		}

		T& top() const
		{
			return _con[0];
		}

	private:
		container _con;
	};
}