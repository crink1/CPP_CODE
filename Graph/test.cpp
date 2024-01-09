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
    string a[] = { "����", "����", "����", "����", "����" };
    crin::Graph<string, int> g1(a, sizeof(a) / sizeof(string));
    g1.addedge("����", "����", 100);
    g1.addedge("����", "����", 200);
    g1.addedge("����", "����", 30);
    g1.addedge("����", "����", 30);
    g1.BFS("����");
    g1.DFS("����");

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


void testdijkstra()
{
	const char* str = "syztx";
		crin::Graph<char, int, INT_MAX, true> g(str, strlen(str));
		g.addedge('s', 't', 10);
		g.addedge('s', 'y', 5);
		g.addedge('y', 't', 3);
		g.addedge('y', 'x', 9);
		g.addedge('y', 'z', 2);
		g.addedge('z', 's', 7);
		g.addedge('z', 'x', 6);
		g.addedge('t', 'y', 2);
		g.addedge('t', 'x', 1);
		g.addedge('x', 'z', 4);
		g.print();
		vector<int> dist;
		vector<int> parentPath;
		g.dijkstra('s', dist, parentPath);
		g.PrintShortPath('s', dist, parentPath);
}
int main()
{
    
    
    //TestGraph();
	//TestGraphMinTree();
	testdijkstra();
	return 0;
}