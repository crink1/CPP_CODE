#pragma once
enum Colour
{
	RED,
	BLACK
};

template<class T>
struct RBTreeNode
{
	struct RBTreeNode* _left;
	struct RBTreeNode* _right;
	struct RBTreeNode* _parent;
	Colour _col;
	T _data;
	RBTreeNode(const T& data)
		:_left(nullptr)
		,_right(nullptr)
		,_parent(nullptr)
		,_data(data)
		,_col(RED)
	{}

};



template<class T, class Ref, class Ptr>
struct Tree_Iterator
{
	typedef struct RBTreeNode<T> Node;
	typedef struct Tree_Iterator<T, Ref, Ptr> self;
	Node* _node;
	Tree_Iterator(Node* node)
		:_node(node)
	{}
						

	Ref operator*()
	{
		return _node->_data;
	}
	Ptr operator->()
	{
		return &_node->_data;
	}
	
	bool operator!=(const self& s)
	{
		return _node != s._node;
	}

	bool operator==(const self& s)
	{
		return _node == s._node;
	}

	self& operator++()
	{
		if (_node->_right)
		{
			Node* cur = _node->_right;
			while (cur->_left)
			{
				cur = cur->_left;
			}
			_node = cur;
		}
		else
		{
			Node* cur = _node;
			Node* parent = _node->_parent;
			while (parent && cur == parent->_right)
			{
				cur = parent;
				parent = cur->_parent;
			}
			_node = parent;
		}
		return *this;
	}

	self& operator--()
	{
		if(_node->_parent->_parent)
		if (_node->_left)
		{
			Node* cur = _node->_left;
			while (cur->_right)
			{
				cur = cur->_right;
			}
			_node = cur;

		}
		else
		{
			Node* cur = _node;
			Node* parent = _node->_parent;
			while (parent && cur == parent->_left)
			{
				cur = parent;
				parent = parent->_parent;
			}
			_node = parent;
		}
	}

};


template<class K, class T,class KeyOfT>
class RBTree
{
	typedef struct RBTreeNode<T> Node;
	
public:
	typedef struct Tree_Iterator<T, T&, T*> iterator;
	typedef struct Tree_Iterator<T, const T&, const T*> const_iterator;
	iterator begin()
	{
		Node* cur = _root;
		while (cur && cur->_left)
		{
			cur = cur->_left;
		}
		return iterator(cur);
	}

	iterator end()
	{
		return iterator(nullptr);
	}

	const_iterator begin() const
	{
		Node* cur = _root;
		while (cur && cur->_left)
		{
			cur = cur->_left;
		}
		return const_iterator(cur);
	}

	const_iterator end() const
	{
		return const_iterator(nullptr);
	}

	pair<Node*,bool> Insert(const T& data)
	{
		if (_root == nullptr)
		{
			_root = new Node(data);
			_root->_col = BLACK;
			return make_pair(_root,true);
		}
		Node* parent = nullptr;
		Node* cur = _root;
		
		KeyOfT kot;
		while (cur)
		{
			if (kot(cur->_data) > kot(data))
			{
				parent = cur;
				cur = cur->_left;
			}
			else if(kot(cur->_data) < kot(data))
			{
				parent = cur;
				cur = cur->_right;
			}
			else
			{
				return make_pair(cur,false);
			}
		}
		cur = new Node(data);
		Node* ret = cur;
		if (kot(parent->_data) > kot(data))
		{
			parent->_left = cur;
			cur->_parent = parent;
		}
		else
		{
			parent->_right = cur;
			cur->_parent = parent;

		}
		while (parent && parent->_col == RED)
		{

			Node* grandfather = parent->_parent;
			if (parent == grandfather->_left)
			{
				Node* uncle = grandfather->_right;
				if (uncle && uncle->_col == RED)
				{
					parent->_col = BLACK;
					uncle->_col = BLACK;
					grandfather->_col = RED;

					cur = grandfather;
					parent = grandfather->_parent;
				}
				else
				{
					if (cur == parent->_left)
					{
						RotateR(grandfather);
						parent->_col = BLACK;
						grandfather->_col = RED;
					}
					else
					{
						RotateL(parent);
						RotateR(grandfather);
						cur->_col = BLACK;
						grandfather->_col = RED;
					}
					break;
				}
			}
			else
			{
				Node* uncle = grandfather->_left;
				if (uncle && uncle->_col == RED)
				{
					parent->_col = BLACK;
					uncle->_col = BLACK;
					grandfather->_col = RED;

					cur = grandfather;
					parent = grandfather->_parent;
				}
				else
				{
					if (cur == parent->_right)
					{
						RotateL(grandfather);
						grandfather->_col = RED;
						parent->_col = BLACK;
					}
					else
					{
						RotateR(parent);
						RotateL(grandfather);
						cur->_col = BLACK;
						grandfather->_col = RED;
					}
					break;
				}
			}
		}
		_root->_col = BLACK;
		return make_pair(ret,true);

	}

	void InOrder()
	{
		return _inorder(_root);
	}

	size_t Size()
	{
		return _size(_root);
	}

	int Height()
	{
		return _Height(_root);
	}

	bool IsBalance()
	{
		if (_root == nullptr)
		{
			return true;
		}
		if (_root->_col == RED)
		{
			return false;
		}
		int refVal = 0;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_col == BLACK)
			{
				refVal++;
			}
			cur = cur->_left;
		}
		int blacknum = 0;
		return Check(_root, blacknum, refVal);
	}


	Node* Find(const K& key)
	{
		
		Node* cur = _root;
		while (cur)
		{
			if (cur->_kv.first > key)
			{
				cur = cur->_left;
			}
			else if(cur->_kv.first < key)
			{
				cur = cur->_right;
			}
			else
			{
				return cur;
			}
		}
		return nullptr;
	}

	bool empty()
	{
		return _root == nullptr;
	}


private:
	//右旋
	void RotateR(Node* parent)
	{
		Node* subl = parent->_left;
		Node* sublr = subl->_right;


		parent->_left = sublr;
		if (sublr)
		{
			sublr->_parent = parent;
		}

		Node* pparent = parent->_parent;

		subl->_right = parent;
		parent->_parent = subl;

		if (_root == parent)
		{
			_root = subl;
			subl->_parent = nullptr;
		}
		else
		{
			if (pparent->_left == parent)
			{
				pparent->_left = subl;
			}
			else
			{
				pparent->_right = subl;
			}
			subl->_parent = pparent;
		}
		
	}
	//左旋
	void RotateL(Node* parent)
	{
		Node* subr = parent->_right;
		Node* subrl = subr->_left;

		parent->_right = subrl;
		subr->_left = parent;
		if (subrl)
		{
			subrl->_parent = parent;
		}

		Node* pparent = parent->_parent;

		parent->_parent = subr;
		if (_root == parent)
		{
			_root = subr;
			subr->_parent = nullptr;
		}
		else
		{
			if (pparent->_left == parent)
			{
				pparent->_left = subr;
			}
			else
			{
				pparent->_right = subr;
			}
			subr->_parent = pparent;
		}
		

	}

	
	void _inorder(Node* root)
	{
		if (root == nullptr)
		{
			return;
		}
		_inorder(root->_left);
		cout << root->_kv.first << " ";
		_inorder(root->_right);
	}

	
	size_t _size(Node* root)
	{
		if (root == nullptr)
		{
			return 0;
		}
		return _size(root->_left) + _size(root->_right) + 1;
	}


	

	int _Height(Node* root)
	{
		if (root == nullptr)
		{
			return 0;
		}
		int hightleft = _Height(root->_left);
		int hightright = _Height(root->_right);
		return hightleft > hightright ? hightleft + 1 : hightright + 1;
	}


	bool Check(Node* root, int blacknum, int refVal)
	{
		if (root == nullptr)
		{
			if (blacknum != refVal)
			{
				cout << "存在黑色节点不相同的路径" << endl;
				return false;
			}
			return true;
		}

		if (root->_col == RED && root->_parent->_col == RED)
		{
			cout<<"有连续的红节点" << endl;
			return false;
		}


		if (root->_col == BLACK)
		{
			blacknum++;
		}
		return Check(root->_left, blacknum, refVal) && Check(root->_right, blacknum, refVal);
	}

	

private:
	Node* _root = nullptr;
};
