//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//bool left(char s) {
//    return s == '(' || s == '{' || s == '[';
//}
//bool right(char s) {
//    return s == ')' || s == '}' || s == ']';
//}
//bool check(char a, char b) {
//    return (a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']');
//}
//
//bool match(string s)
//{
//    stack<char> p;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (left(s[i])) {
//            p.push(s[i]);
//        }
//        else if (right(s[i])) {
//            if (!p.empty() && check(p.top(), s[i])) { //ջ���գ���ƥ����ȷ
//                p.pop();
//            }
//            else {
//                return false; //��ƥ�䣬ֱ�ӷ���false
//            }
//        }
//
//    }
//    if (!p.empty()) return false; //ջ���գ�˵������û��ƥ��������ţ�����false
//    return true; //ȫ��ƥ��ɹ�
////}