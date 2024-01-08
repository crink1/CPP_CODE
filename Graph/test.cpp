#include<iostream>

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
    string a[] = { "张三", "李四", "王五", "赵六", "周七" };
    crin::Graph<string, int> g1(a, sizeof(a) / sizeof(string));
    g1.addedge("张三", "李四", 100);
    g1.addedge("张三", "王五", 200);
    g1.addedge("王五", "赵六", 30);
    g1.addedge("王五", "周七", 30);
    g1.BFS("张三");
    g1.DFS("张三");

}

void TestGraphMinTree()
{
	const char str[] = "abcdefghi";
	crin::Graph<char, int> g(str, strlen(str));
	g.addedge('a', 'b', 4);
	g.addedge('a', 'h', 8);
	//g.addedge('a', 'h', 9);
	g.addedge('b', 'c', 8);
	g.addedge('b', 'h', 11);
	g.addedge('c', 'i', 2);
	g.addedge('c', 'f', 4);
	g.addedge('c', 'd', 7);
	g.addedge('d', 'f', 14);
	g.addedge('d', 'e', 9);
	g.addedge('e', 'f', 10);
	g.addedge('f', 'g', 2);
	g.addedge('g', 'h', 1);
	g.addedge('g', 'i', 6);
	g.addedge('h', 'i', 7);

	crin::Graph<char, int> kminTree;
	cout << "Kruskal:" << g.kruskal(kminTree) << endl;
	kminTree.print();
	cout << endl << endl;

	crin::Graph<char, int> pminTree;
	cout << "Prim:" << g.prim(pminTree, 'a') << endl;
	pminTree.print();
	cout << endl;

	
}

int main()
{
    
    
    //TestGraph();
	TestGraphMinTree();
	return 0;
}