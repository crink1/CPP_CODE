#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<functional>
using namespace std;
#include"UnionFindSet.h"
#include"Graph.h"


void TestGraph()
{
   /* crin::Graph<char, int, INT_MAX, true> g("0123", 4);
    g.addedge('0', '1', 1);
    g.addedge('0', '3', 4);
    g.addedge('1', '3', 2);
    g.addedge('1', '2', 9);
    g.addedge('2', '3', 8);
    g.addedge('2', '1', 5);
    g.addedge('2', '0', 3);
    g.addedge('3', '2', 6);
    g.BFS('0');*/
    string a[] = { "����", "����", "����", "����", "����" };
    crin::Graph<string, int> g1(a, sizeof(a) / sizeof(string));
    g1.addedge("����", "����", 100);
    g1.addedge("����", "����", 200);
    g1.addedge("����", "����", 30);
    g1.addedge("����", "����", 30);
    g1.BFS("����");
    g1.DFS("����");

}

int main()
{
    
    
    TestGraph();
   
	return 0;
}