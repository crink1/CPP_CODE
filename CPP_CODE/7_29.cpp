//struct SeqList
//{
//public:
//	void PushBack(const A& x)
//	{
//		//
//		_a[_size++] = x;
//	}
//
//	size_t size() const
//	{
//		return _size;
//	}
//
//	
//	const A& operator[](size_t i) const
//	{
//		assert(i < _size);
//
//		return _a[i];
//	}
//
//	
//	A& operator[](size_t i)
//	{
//		assert(i < _size);
//
//		return _a[i];
//	}
//
//private:
//	
//	A* _a = (A*)malloc(sizeof(A) * 10);
//	size_t _size = 0;
//	size_t _capacity = 0;
//};