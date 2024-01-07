#pragma once


namespace crin
{
	template<class V,class W, W MAX_W = INT_MAX, bool Direction = false>
	class Graph
	{
		typedef Graph<V, W, MAX_W, Direction> self;
	public:

		Graph(const V* v, size_t n)
		{
			_vertexs.reserve(n);
			for (int i = 0; i < n; i++)
			{
				_vertexs.push_back(v[i]);
				_indexmap[v[i]] = i;
			}
			_matrix.resize(n);
			for (int i = 0; i < n; i++)
			{
				_matrix[i].resize(n, MAX_W);
				
			}
		}

		size_t getindex(const V& v)
		{
			auto it = _indexmap.find(v);
			if (it != _indexmap.end())
			{
				return it->second;
			}
			else
			{
				throw invalid_argument("顶点不存在");
				return - 1;
			}
		}

		void addedge(const V& src, const V& dst, const W& w)
		{
			size_t srci = getindex(src);
			size_t dsti = getindex(dst);

			_matrix[srci][dsti] = w;

			if (Direction == false)
			{
				_matrix[dsti][srci] = w;
			}
		}

		void BFS(const V& src)
		{
			int srci = getindex(src);
			queue<int> q;
			vector<bool> visited(_vertexs.size(), false);
			q.push(srci);
			visited[srci] = true;
			int levelsize = 1;
			size_t n = _vertexs.size();

			while (!q.empty())
			{
				for (int i = 0; i < levelsize; i++)
				{
					int front = q.front();
					q.pop();
					cout << front << ":" << _vertexs[front] << endl;

					for (int i = 0; i < n; i++)
					{
						if (_matrix[front][i] != MAX_W && visited[i] == false)
						{
							q.push(i);
							visited[i] = true;
						}
					}
				}
				//cout << endl;
				levelsize = q.size();
			}
			cout << endl;

		}

		void _DFS(size_t srci, vector<int>& visited)
		{
			cout << srci << ":" << _vertexs[srci] << endl;
			visited[srci] = true;
			for (int i = 0; i < _vertexs.size(); i++)
			{
				if (_matrix[srci][i] != MAX_W && visited[i] == false)
				{
					_DFS(i, visited);
				}
			}
		}

		void DFS(const V& src)
		{
			int srci = getindex(src);
			vector<int> visited(_vertexs.size(), false);
			_DFS(srci, visited);
		}


		void print()
		{
			for (int i = 0; i < _vertexs.size(); i++)
			{
				cout << "[" << i << "]" << "->" << _vertexs[i] << endl;
			}
			cout << endl;

			for (int i = 0; i < _matrix.size(); i++)
			{
				for (int j = 0; j < _matrix[i].size(); j++ )
				{
					if (_matrix[i][j] == INT_MAX)
					{
						cout << "∞" << " ";
					}
					else
					{
						cout << _matrix[i][j] << " ";

					}
				}
				cout << endl;
			}
		}	

		struct Edge
		{
			size_t _srci;
			size_t _dsti;
			W _w;

			Edge(size_t srci, size_t dsti, const W& w)
				:_srci(srci)
				,_dsti(dsti)
				,_w(w)
			{}

			bool operator>(const Edge& e) const
			{
				return _w > e._w;
			}
		};

		W kruskal(self& mintree)
		{
			size_t n = _vertexs.size();
			mintree._indexmap = _indexmap;
			mintree._vertexs = _vertexs;
			mintree._matrix.resize(n);
			for (size_t i = 0; i < n; i++)
			{
				mintree._matrix[i].resize(n, MAX_W);
			}

			priority_queue<Edge, vector<Edge>, greater<Edge>> minq;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i < j && _matrix[i][j] != MAX_W)
					{
						minq.push(Edge(i, j, _matrix[i][j]));
					}
				}
			}

			int size = 0;
			W totalw = W();
			UnionFindSet<size_t> ufs;
			
			while (!minq.empty())
			{
				Edge min = minq.top();
				if (!ufs.inset(min._srci, min._dsti))
				{
					cout << _vertexs[min._srci] << "->" << _vertexs[min._dsti] << ":" << min._w << endl;
					mintree.addedge(min._srci, min._dsti, min._w);
					ufs.Union(min._srci, min._dsti);
					++size;
					totalw += min._w;
				}
				else
				{
					cout << "遇到环";
					cout << _vertexs[min._srci] << "->" << _vertexs[min._dsti] << ":" << min._w << endl;
				}
				
			}

			if (size == n - 1)
			{
				return totalw;
			}
			else
			{
				return W();
			}

		}


		W prim(self& mintree, const W& src)
		{
			size_t srci = getindex(src);
			size_t n = _vertexs.size();
			mintree._indexmap = _indexmap;
			mintree._vertexs = _vertexs;
			mintree._matrix.resize(n);
			for (int i = 0; i < n; i++)
			{
				mintree._matrix[i].resize(n, MAX_W);
			}

			vector<bool> X(n, false);
			vector<bool> Y(n, false);
			X[srci] = true;
			Y[srci] = false;

			priority_queue<Edge, vector<Edge>, greater<Edge>> minq;
			for (int i = 0; i < n; i++)
			{
				if (_matrix[srci][i] != MAX_W)
				{
					minq.push(Edge(srci, i, _matrix[srci][i]));
				}
			}
		}

	private:
		vector<V> _vertexs;
		map<V, size_t> _indexmap;
		vector<vector<W>> _matrix;
	};
}



namespace link_tables
{

	template<class W>
	class Edge
	{
	public:
		//int _srci;
		int _dsti;
		W _w;
		Edge<W>* _next;

		Edge(int dsti,const W& w)
			:_dsti(dsti)
			,_w(w)
			,_next(nullptr)
		{}
	};

	template<class V, class W, W MAX_W = INT_MAX, bool Direction = false>
	class Graph
	{
		typedef Edge<W> Edge;
	public:

		Graph(const V* v, size_t n)
		{
			_vertexs.reserve(n);
			for (int i = 0; i < n; i++)
			{
				_vertexs.push_back(v[i]);
				_indexmap[v[i]] = i;
			}
			_table.resize(n, nullptr);
		}

		size_t getindex(const V& v)
		{
			auto it = _indexmap.find(v);
			if (it != _indexmap.end())
			{
				return it->second;
			}
			else
			{
				throw invalid_argument("顶点不存在");
				return -1;
			}
		}

		void addedge(const V& src, const V& dst, const W& w)
		{
			size_t srci = getindex(src);
			size_t dsti = getindex(dst);

			Edge* cur = new Edge(dsti, w);
			cur->_next = _table[srci];
			_table[srci] = cur;

			if (Direction == false)
			{
				Edge* eg = new Edge(srci, w);
				eg->_next = _table[dsti];
				_table[dsti] = eg;
			}

			
		}


		void print()
		{
			
		}

	private:
		vector<V> _vertexs;
		map<V, size_t> _indexmap;
		vector<Edge*> _table;
	};
}