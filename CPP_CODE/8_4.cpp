//#include<iostream>
//using namespace std;
//
//void test1()
//{
//    std::string str("111111");
//    std::string base = "The quick brown fox jumps over a lazy dog.";
//
//    str.assign(base);
//    std::cout << str << '\n';
//
//    str.assign(base, 6, 10);
//    std::cout << str << '\n';
//}
//void test2()
//{
//
//    std::string str("hello world");
//    str.insert(0, 1, 'x');
//    str.insert(str.begin(), 'x');
//    cout << str << endl;
//
//    str.erase(5);
//    cout << str << endl;
//
//    std::string s1("hello world");
//    s1.replace(5, 3, "%%20");
//    cout << s1 << endl;
//
//    std::string s2("The quick brown fox jumps over a lazy dog.");
//    string s3;
//    for (auto ch : s2)
//    {
//        if (ch != ' ')
//        {
//            s3 += ch;
//        }
//        else
//        {
//            s3 += "20%";
//        }
//    }
//
//
//    printf("s2：%p\n", s2.c_str());
//    printf("s3：%p\n", s3.c_str());
//
//    swap(s2, s3);
//
//
//    printf("s2：%p\n", s2.c_str());
//    printf("s3：%p\n", s3.c_str());
//
//    cout << s2 << endl;
//}
//
//void test3()
//{
//    string s1("test.cpp.tar.zip");
// 
//    size_t i = s1.rfind('.');
//
//    string s2 = s1.substr(i);
//    cout << s2 << endl;
//
//    string s3("https://www.baidu.com/");
//
//
//    string sub1, sub2, sub3;
//    size_t i1 = s3.find(':');
//    if (i1 != string::npos)
//        sub1 = s3.substr(0, i1);
//    else
//        cout << "没有找到i1" << endl;
//
//    size_t i2 = s3.find('/', i1 + 3);
//    if (i2 != string::npos)
//        sub2 = s3.substr(i1 + 3, i2 - (i1 + 3));
//    else
//        cout << "没有找到i2" << endl;
//
//    sub3 = s3.substr(i2 + 1);
//
//    cout << sub1 << endl;
//    cout << sub2 << endl;
//    cout << sub3 << endl;
//}
//
//int main()
//{
//    //test1();
//    // test2();
//    test3();
//	//cout<<string::npos<<endl;
//	return 0;
//}