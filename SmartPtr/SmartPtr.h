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
		auto_ptr(AutoPtr<T>* ptr)
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
			retunr _ptr;
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
		{

		}
	private:

	};
}