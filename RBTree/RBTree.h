#pragma once
enum Colour
{
	RED,
	BLACK
};

template<class K,class V>
struct RBTreeNode
{
	struct RBTreeNode* _left;
	struct RBTreeNode* _right;
	struct RBTreeNode* _parent;
	Colour _col;
	pair<K, V> _kv;
	RBTreeNode(pair<K,V>& kv)
		:_left(nullptr)
		,_right(nullptr)
		,_parent(nullptr)
		,_kv(kv)
		,_col(RED)
	{}

};

template<class K, class V>
class REBTree
{
	typedef struct RBTreeNode<K, V> Node;
public:
	bool Insert(const pair<K,V>& kv)
	{
		if (_root == nullptr)
		{
			_root = new Node(kv);
			return true;
		}
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_kv.first > kv.first)
			{
				parent = cur;
				cur = cur->_left;
			}
			else if(cur->_kv.first < kv.first)
			{
				parent = cur;
				cur = cur->_right;
			}
			else
			{
				return false;
			}
		}
		cur = new Node(kv);
		if (parent->_kv.first > kv.first)
		{
			parent->_left = cur;
			cur->_parent = parent;
		}
		else
		{
			parent->_right = cur;
			cur->_parent = parent;

		}


	}
private:
	Node* _root;
};
