//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//		array[i] *= 2;
//
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//		cout << array[i] << " ";
//	cout << endl;
//
//
//	for (auto& x : array)
//	{
//		x *= 2;
//	}
//
//	// ��Χfor
//	// ����ȡ�����е����ݸ�ֵ��e
//	// �Զ��жϽ���
//	// �Զ�����
//	for (auto e : array)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//class Stack
//{
//public:
//	// ��Ա����
//	void Init()
//	{
//		a = nullptr;
//		top = capacity = 0;
//	}
//
//	void Push(int x)
//	{
//		if (top == capacity)
//		{
//			size_t newcapacity = capacity == 0 ? 4 : capacity * 2;
//			a = (int*)realloc(a, sizeof(int) * newcapacity);
//			capacity = newcapacity;
//		}
//
//		a[top++] = x;
//	}
//
//	int Top()
//	{
//		return a[top - 1];
//	}
//
//private:
//	// ��Ա����
//	int* a;
//	int top;
//	int capacity;
//};
//
//int main()
//{
//	Stack st;
//	st.Init();
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//
//	//cout << st.a[st.top-1] << endl;
//
//	cout << st.Top() << endl;
//
//
//
//	return 0;
//}

