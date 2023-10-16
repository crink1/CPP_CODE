//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        vector<int> ret;
//        long long m = 1;
//        int flag = 1;
//        int count = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] == 0)
//            {
//                flag = 0;
//                count++;
//            }
//            else
//            {
//                m = m * nums[i];
//            }
//
//        }
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] == 0)
//            {
//                if (count > 1)
//                {
//                    ret.push_back(0);
//                }
//                else
//                {
//                    ret.push_back(m);
//                }
//
//            }
//            else
//            {
//                ret.push_back(m / nums[i] * flag);
//            }
//
//        }
//        return ret;
//    }
//};
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        unordered_map<int, int> hash;
//        hash[0] = 1;
//        int sum = 0;
//        int ret = 0;
//        for (auto& i : nums)
//        {
//            sum += i;
//            if (hash.count(sum - k))
//            {
//                ret += hash[sum - k];
//
//            }
//            hash[sum]++;
//        }
//        return ret;
//    }
//};
//#include <iostream>
//
//using namespace std;
//
//class A
//{
//public:
//    virtual void print()
//    {
//        cout << "A::print()" << "\n";
//    }
//};
//
//class B : public A
//{
//public: virtual void print()
//{
//    cout << "B::print()" << "\n";
//}
//};
//
//class C : public A
//{
//public: virtual void print()
//{
//    cout << "C::print()" << "\n";
//}
//};
//
//void print(A a)
//{
//    a.print();
//}
//
//int main()
//{
//    A a, * aa, * ab, * ac;
//    B b;
//    C c;
//    aa = &a;
//    ab = &b;
//    ac = &c;
//    a.print();
//    b.print();
//    c.print();
//    aa->print();
//    ab->print();
//    ac->print();
//    print(a);
//    print(b);
//    print(c);
//}
//#include <iostream>
//using namespace std;
//
//class parent {
//    int i;
//protected:
//    int x;
//public:
//    parent() { x = 0; i = 0; }
//    void change() { x++; i++; }
//    void display();
//};
//
//class son :public parent {
//public:
//    void modify();
//};
//
//void parent::display() {
//    cout << "x=" << x << endl;
//}
//
//void son::modify() {
//    x++;
//}
//
//int main() {
//    son A;
//    parent B;
//    A.display();
//    A.change();
//    A.modify();
//    A.display();
//    B.change();
//    B.display();
//    return 0;
//}