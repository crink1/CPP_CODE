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
//	//ɾ��������Ԫ��
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
//    // ��map�в���Ԫ�صķ�ʽ��
//    // ����ֵ��<"peach","����">����map�У���pairֱ���������ֵ��
//    m.insert(pair<string, string>("peach", "����"));
//    // ����ֵ��<"peach","����">����map�У���make_pair�����������ֵ��
//    m.insert(make_pair("banan", "�㽶"));
//
//    // ����operator[]��map�в���Ԫ��
//       /*
//    operator[]��ԭ���ǣ�
//     ��<key, T()>����һ����ֵ�ԣ�Ȼ�����insert()�������ü�ֵ�Բ��뵽map��
//     ���key�Ѿ����ڣ�����ʧ�ܣ�insert�������ظ�key����λ�õĵ�����
//     ���key�����ڣ�����ɹ���insert���������²���Ԫ������λ�õĵ�����
//     operator[]�������insert����ֵ��ֵ���е�value����
//    */
//    // ��<"apple", "">����map�У�����ɹ�������value�����ã�����ƻ������ֵ�������ý��
//        m["apple"] = "ƻ��";
//    // key������ʱ���쳣
//    //m.at("waterme") = "ˮ����";
//    cout << m.size() << endl;
//    // �õ�����ȥ����map�е�Ԫ�أ����Եõ�һ������key���������
//    for (auto& e : m)
//        cout << e.first << "--->" << e.second << endl;
//    cout << endl;
//    // map�еļ�ֵ��keyһ����Ψһ�ģ����key���ڽ�����ʧ��
//    auto ret = m.insert(make_pair("peach", "��ɫ"));
//    if (ret.second)
//        cout << "<peach, ��ɫ>����map��, �Ѿ�����" << endl;
//    else
//        cout << "��ֵΪpeach��Ԫ���Ѿ����ڣ�" << ret.first->first << "--->"
//        << ret.first->second << " ����ʧ��" << endl;
//    // ɾ��keyΪ"apple"��Ԫ��
//    m.erase("apple");
//    if (1 == m.count("apple"))
//        cout << "apple����" << endl;
//    else
//        cout << "apple������" << endl;
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