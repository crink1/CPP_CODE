//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//#include<mutex>
//#include<thread>
//#include<chrono>

//#ifdef _WIN32
//CreateThread()
//#else
//pthread_create()
//#endif

//void Print1(size_t n, const string& s, mutex& m, int& rx)
//{
//	for (size_t i = 0; i < n; i++)
//	{
//		m.lock();
//
//		cout <<this_thread::get_id()<<s<<":" << i << endl;
//		++rx;
//
//		m.unlock();
//
//		this_thread::sleep_for(chrono::milliseconds(300));
//	}
//}
//
//int main()
//{
//	mutex mtx;
//	int x = 0;
//	thread t1(Print1, 100,  "��������", ref(mtx), ref(x));
//	thread t2(Print1, 200, "���ǵ���", ref(mtx), ref(x));
//
//	//thread t3(t1);
//
//	cout <<"�߳�1��" << t1.get_id() << endl;
//	cout <<"�߳�2��"<< t2.get_id() << endl;
//
//	t1.join();
//	t2.join();
//
//	cout << x << endl;
//
//	return 0;
//}

//void Print2(size_t n, const string& s)
//{
//	for (size_t i = 0; i < n; i++)
//	{
//		cout << this_thread::get_id() << s << ":" << i << endl;
//	}
//}
//
//int main()
//{
//	size_t n;
//	cin >> n;
//
//	//����n���߳�ִ��Print
//	vector<thread> vthd(n);
//	size_t j = 0;
//	for (auto& thd : vthd)
//	{
//		// �ƶ���ֵ
//		thd = thread(Print2, 10,  "�߳�" + to_string(j++));
//	}
//
//	for (auto& thd : vthd)
//	{
//		thd.join();
//	}
//
//	thread t1(Print1, 100, 1, "��������");
//	thread t2(move(t1));
//
//	t2.join();
//
//	return 0;
//}

// thread + lambda
//int main()
//{
//	size_t n1 = 0;
//	size_t n2 = 0;
//	cin >> n1 >> n2;
//	mutex mtx;
//	
//
//	size_t x = 0;
//
//	thread t1([n1, &x, &mtx]() {
//		for (size_t i = 0; i < n1; i++)
//		{
//			mtx.lock();
//			++x;
//			mtx.unlock();
//			//cout << this_thread::get_id() << ":" << i << endl;
//		}
//	});
//
//	thread t2([n2, &x, &mtx]() {
//		for (size_t i = 0; i < n2; i++)
//		{
//			mtx.lock();
//			++x;
//			mtx.unlock();
//			//cout << this_thread::get_id() << ":" << i << endl;
//		}
//	});
//
//	t1.join();
//	t2.join();
//
//	cout << x << endl;
//
//	return 0;
//}

//void func(int i)
//{
//	// mutex  lockʱ��������
//	//....
//
//	func(i - 1);
//}
