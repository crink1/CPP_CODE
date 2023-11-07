#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;

//int main()
//{		
//	vector<int> v = { 1,2,5,2,4,7,4,5,7,8,1,2,5,7,9,0,2,2 };
//	set<int> s(v.begin(),v.end());
//	set<int>::iterator it = s.begin();
//
//	while (it != s.end())
//	{
//		cout<<*it<<" ";
//		it++;
//	}
//	cout << endl;
//	s.erase(4);
//	for (auto& i : s)
//	{
//		cout<<i<<" ";
//	}
//	cout << endl;
//	//删除不存在元素
//	cout << s.erase(0) << endl;
//
//	it = s.find(1);
//	if (it != s.end())
//	{
//		s.erase(it);
//	}
//
//	cout << endl;
//	for (auto& i : s)
//	{
//		cout << i << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//void TestMap()
//{
//    map<string, string> m;
//    // 向map中插入元素的方式：
//    // 将键值对<"peach","桃子">插入map中，用pair直接来构造键值对
//    m.insert(pair<string, string>("peach", "桃子"));
//    // 将键值对<"peach","桃子">插入map中，用make_pair函数来构造键值对
//    m.insert(make_pair("banan", "香蕉"));
//
//    // 借用operator[]向map中插入元素
//       /*
//    operator[]的原理是：
//     用<key, T()>构造一个键值对，然后调用insert()函数将该键值对插入到map中
//     如果key已经存在，插入失败，insert函数返回该key所在位置的迭代器
//     如果key不存在，插入成功，insert函数返回新插入元素所在位置的迭代器
//     operator[]函数最后将insert返回值键值对中的value返回
//    */
//    // 将<"apple", "">插入map中，插入成功，返回value的引用，将“苹果”赋值给该引用结果
//        m["apple"] = "苹果";
//    // key不存在时抛异常
//    //m.at("waterme") = "水蜜桃";
//    cout << m.size() << endl;
//    // 用迭代器去遍历map中的元素，可以得到一个按照key排序的序列
//    for (auto& e : m)
//        cout << e.first << "--->" << e.second << endl;
//    cout << endl;
//    // map中的键值对key一定是唯一的，如果key存在将插入失败
//    auto ret = m.insert(make_pair("peach", "桃色"));
//    if (ret.second)
//        cout << "<peach, 桃色>不在map中, 已经插入" << endl;
//    else
//        cout << "键值为peach的元素已经存在：" << ret.first->first << "--->"
//        << ret.first->second << " 插入失败" << endl;
//    // 删除key为"apple"的元素
//    m.erase("apple");
//    if (1 == m.count("apple"))
//        cout << "apple还在" << endl;
//    else
//        cout << "apple被吃了" << endl;
//}
//int main()
//{
//    TestMap();
//    return 0;
//}

//class Solution {
//public:
//    struct cmp
//    {
//        bool operator()(const pair<string, int>& p1, const pair<string, int>& p2)
//        {
//            return p1.second > p2.second || (p1.second == p2.second && p1.first < p2.first);
//        }
//    };
//    vector<string> topKFrequent(vector<string>& words, int k) {
//        map<string, int> m;
//        for (auto& w : words)
//        {
//            m[w]++;
//        }
//        vector<pair<string, int>> sortv(m.begin(), m.end());
//
//        sort(sortv.begin(), sortv.end(), cmp());
//        vector<string> v;
//        for (int i = 0; i < k; i++)
//        {
//            v.push_back(sortv[i].first);
//        }
//        return v;
//    }
//};

//int main()
//{
//	map<string, int> m;
//	string str = "dwa";
//	m[str]++;
//	return 0;
//}