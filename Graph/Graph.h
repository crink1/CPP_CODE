#pragma once


namespace crin
{
	template<class V,class W, W MAX_W = INT_MAX, bool Direction = false>
	class Graph
	{
	public:

		Graph(const V* v, size_t n)
		{
			_vertex.reserve(n);
			for (int i = 0; i < n; i++)
			{
				_vertex.push_back(v[i]);
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


		void print()
		{
			for (int i = 0; i < _vertex.size(); i++)
			{
				cout << "[" << i << "]" << "->" << _vertex[i] << endl;
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

	private:
		vector<V> _vertex;
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
			_vertex.reserve(n);
			for (int i = 0; i < n; i++)
			{
				_vertex.push_back(v[i]);
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
		vector<V> _vertex;
		map<V, size_t> _indexmap;
		vector<Edge*> _table;
	};
}