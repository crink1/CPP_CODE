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
//            if (!p.empty() && check(p.top(), s[i])) { //栈不空，且匹配正确
//                p.pop();
//            }
//            else {
//                return false; //不匹配，直接返回false
//            }
//        }
//
//    }
//    if (!p.empty()) return false; //栈不空，说明存在没有匹配的左括号，返回false
//    return true; //全都匹配成功
////}