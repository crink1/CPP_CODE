#pragma once
template<class T>
class SmartPtr
{
public:

	SmartPtr(T* ptr)
		:_ptr(ptr)
	{}

	~SmartPtr()
	{
		delete _ptr;
		cout << "delete" << endl;
	}
	T& operator*()
	{
		return *_ptr;
	}
	T* operator->()
	{
		return _ptr;
	}
private:
	T* _ptr;
};


namespace crin
{
	template<class T>
	class auto_ptr
	{
	public:
		auto_ptr(T* ptr)
			:_ptr(ptr)
		{}
		auto_ptr(auto_ptr<T>* ptr)
			:_ptr(ptr)
		{
			ptr = nullptr;
		}
		~auto_ptr()
		{
			if (_ptr)
			{
				delete _ptr;			
			}
		}

		T& operator*()
		{
			return *_ptr;
		}

		T* operator->()
		{
			return _ptr;
		}


	private:
		T* _ptr;
	};


	template<class T>
	class unique_ptr
	{
	public:

		unique_ptr(T* ptr)
			:_ptr(ptr)
		{}
		~unique_ptr()
		{
			delete _ptr;
		}
		T& operator*()
		{
			return *_ptr;
		}
		T* operator->()
		{
			return _ptr;
		}
		unique_ptr(const unique_ptr<T>& up) = delete;
		unique_ptr<T>& operator=(const unique_ptr<T>& up) = delete;
	private:
		T* _ptr;
	};

	template<class T>

	class shared_ptr
	{
	public:
		shared_ptr(T* ptr = nullptr)
			:_ptr(ptr)
			,_pcount(new int(1))
		{}

		shared_ptr(const shared_ptr<T>& sp)
			:_ptr(sp._ptr)
			,_pcount(sp._pcount)
		{
			(*_pcount)++;
		}

		shared_ptr<T>& operator=(const shared_ptr<T>& sp)
		{
			if (_ptr != sp._ptr)
			{

				release();
				_ptr = sp._ptr;
				_pcount = sp._pcount;
				++(*_pcount);
			}
			return *this;
		}

		T& operator*()
		{
			return *_ptr;
		}


		T* operator->()
		{
			return _ptr;
		}


		int use_count() const
		{
			return * _pcount;
		}

		T* get() const
		{
			return _ptr;
		}

		void release()
		{
			if (--(*_pcount) == 0)
			{
				delete _ptr;
				delete _pcount;
				//cout << "delete" << endl;
			}

		}



		~shared_ptr()
		{
			release();
		}


	private:
		T* _ptr;
		int* _pcount;

	};

	template<class T>
	class weak_ptr
	{
	public:
		weak_ptr()
			:_ptr(nullptr)
		{}

		weak_ptr(const shared_ptr<T>& sp)
			:_ptr(sp.get())
		{}

		weak_ptr<T>& operator=(const shared_ptr<T>& sp)
		{
			_ptr = sp.get();
			return *this;
		}

		
	private:
		T* _ptr;
	};
}