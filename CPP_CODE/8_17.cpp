//#include<iostream>
//using namespace std;

//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	free(p1);
//	int* p2 = (int*)calloc(4, sizeof(int));
//	int* p3 = (int*)realloc(p2, sizeof(int) * 10);
//	free(p3);
//	return 0;
//}
//int main()
//{
//	//动态申请一个int类型的空间
//	int* p1 = new int;
//	delete p1;
//	//动态申请10个int类型的空间
//	int* p2 = new int[10];
//	delete[] p2;
//	//动态申请一个int类型的空间并初始化成10
//	int* p3 = new int(10);
//	delete p3;
//	//动态申请10个int类型的空间并初始化
//	int* p4 = new int[10]{10,9,8,7,6,5,4,3,2,1};
//	delete[] p4;
//	return 0;
//}

//class A
//{
//public:
//
//	A(int a)
//		:_a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//
//private:
//	int _a;
//};
//
//int main()
//{
//	A* ptr1 = new A(6);
//	delete ptr1;
//
//	return 0;
//}

//void* __CRTDECL operator new(size_t size) _THROW1(_STD bad_alloc)
//{
//	// try to allocate size bytes
//	void* p;
//	while ((p = malloc(size)) == 0)
//        if (_callnewh(size) == 0)
//        {
//            static const std::bad_alloc nomem;
//            _RAISE(nomem);
//        }
//    return (p);
//}
//void operator delete(void* pUserData)
//{
//    _CrtMemBlockHeader* pHead;
//    RTCCALLBACK(_RTC_Free_hook, (pUserData, 0));
//    if (pUserData == NULL)
//        return;
//    _mlock(_HEAP_LOCK);  /* block other threads */
//    __TRY
//        /* get a pointer to memory block header */
//        pHead = pHdr(pUserData);
//    /* verify block type */
//    _ASSERTE(_BLOCK_TYPE_IS_VALID(pHead->nBlockUse));
//    _free_dbg(pUserData, pHead->nBlockUse);
//    __FINALLY
//        _munlock(_HEAP_LOCK);  /* release other threads */
//    __END_TRY_FINALLY
//        return;
//}

//class A
//{
//public:
//
//	A(int a)
//		:_a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//
//private:
//	int _a;
//};
//
//int main()
//{
//	A* ptr1 = (A*)malloc(sizeof(A));
//	new(ptr1)A(6);//构造函数有参数要传参
//	delete ptr1;
//
//	return 0;
//}
