//#include<iostream>
//#include<string>
//#include<map>
//#include<list>


//class A
//{
//public:
//	static A* GetInstance()
//	{
//		return &_inst;
//	}
//
//	void Add(const string& key, const string& value)
//	{
//		_dict[key] = value;
//	}
//
//	void Print()
//	{
//		for (auto& kv : _dict)
//		{
//			cout << kv.first << ":" << kv.second << endl;
//		}
//		cout << endl;
//	}
//private:
//	A()
//	{}
//
//	A(const A& aa) = delete;
//	A& operator=(const A& aa) = delete;
//
//	map<string, string> _dict;
//	int _n = 0;
//
//	static A _inst;
//};
//
//A A::_inst;