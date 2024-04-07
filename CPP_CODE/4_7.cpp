//class ThroneInheritance {
//private:
//    unordered_map<string, vector<string>> edges;
//    unordered_set<string> dead;
//    string king;
//
//public:
//    ThroneInheritance(string kingName) : king{ move(kingName) } {}
//
//    void birth(string parentName, string childName) {
//        edges[move(parentName)].push_back(move(childName));
//    }
//
//    void death(string name) {
//        dead.insert(move(name));
//    }
//
//    vector<string> getInheritanceOrder() {
//        vector<string> ans;
//
//        function<void(const string&)> preorder = [&](const string& name) {
//            if (!dead.count(name)) {
//                ans.push_back(name);
//            }
//            if (edges.count(name)) {
//                for (const string& childName : edges[name]) {
//                    preorder(childName);
//                }
//            }
//            };
//
//        preorder(king);
//        return ans;
//    }
//};

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//size_t split(const std::string& filename, const std::string& sep, std::vector<std::string>* ret)
//{
//    std::size_t previous = 0;
//    std::size_t current = filename.find(sep);
//    while (current != std::string::npos)
//    {
//        if (current > previous)
//        {
//            ret->push_back(filename.substr(previous, current - previous));
//        }
//        previous = current + 1;
//        current = filename.find(sep, previous);
//    }
//    if (previous != filename.size())
//    {
//        ret->push_back(filename.substr(previous));
//    }
//    return ret->size();
//}
//
//int main()
//{
//    string str = "abc,,,,def,deg,";
//    vector<string> ret;
//    split(str, ",", &ret);
//    for (auto &i : ret)
//    {
//        cout << i << endl;
//    }
//    cout << ret.size() << endl;
//    return 0;
//}