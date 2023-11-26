#pragma once
#include<assert.h>


namespace crin
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;


		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}

		const_iterator end() const
		{
			return _finish;
		}

		vector()
		{}

		vector(initializer_list<T> lt)
		{
			reserve(lt.size());
			for (auto& e : lt)
			{
				push_back(e);
			}
		}

		template<class inputiterator>
		vector(inputiterator begin, inputiterator end)
		{
			while (begin != end)
			{
				push_back(*begin);
				begin++;
			}
		}

		vector(size_t n, const T& val = T())
		{
			reserve(n);
			for (size_t i = 0; i < n; i++)
			{
				push_back(val);
			}

		}
		vector(const vector<T>& v)
		{
			reserve(v.capacity());
			for (auto& val : v)
			{
				push_back(val);
			}
		}
		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_endofstorage, v._endofstorage);
		}
		vector<T>& operator=(vector<T> v)
		{
			swap(v);
			return *this;
		}
		~vector()
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}

		size_t size() const
		{
			return _finish - _start;
		}

		size_t capacity() const
		{
			return _endofstorage - _start;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				T* tmp = new T[n];
				size_t sz = size();
				if (_start)
				{
					for (size_t i = 0; i < sz; i++)
					{
						tmp[i] = _start[i];
					}
					delete[] _start;
				}

				_start = tmp;
				_finish = tmp + sz;
				_endofstorage = tmp + n;
			}
		}

		void resize(size_t n, const T& val = T())
		{
			if (n < size())
			{
				_finish = _start + n;
			}
			if (n > size())
			{
				reserve(n);

				while (_finish < _start + n)
				{
					*_finish = val;
					_finish++;
				}
			}
		}

		iterator erase(iterator pos)
		{
			assert(pos >= _start);
			assert(pos < _finish);

			iterator end = pos + 1;
			while (end < _finish)
			{
				*(end - 1) = *(end);
				end++;
			}
			_finish--;
			return pos;
		}

		void insert(iterator pos, const T& x)
		{
			assert(pos <= _finish);
			assert(pos >= _start);
			if (_finish == _endofstorage)
			{
				size_t len = pos - _start;
				reserve(capacity() == 0 ? 4 : capacity() * 2);
				pos = _start + len;
			}
			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
			}
			*pos = x;
			_finish++;

		}

		void push_back(const T& x)
		{
			insert(_finish, x);
		}
		void pop_back()
		{
			erase(_finish - 1);
		}
		T& operator[](size_t n)
		{
			assert(n < size());

			return _start[n];
		}
		const T& operator[](size_t n) const
		{
			assert(n < size());
			return _start[n];
		}
	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _endofstorage = nullptr;
	};


}