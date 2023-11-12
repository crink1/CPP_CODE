#pragma once
#include<assert.h>
template<class K, class V>
struct AVLTreeNode
{
	struct AVLTreeNode* _left;
	struct AVLTreeNode* _right;
	struct AVLTreeNode* _parent;
	pair<K, V> _kv;
	int _bf;

	AVLTreeNode(const pair<K,V>& kv)
		:_left(nullptr)
		, _right(nullptr)
		, _parent(nullptr)
		, _kv(kv)
		,_bf(0)
	{}
};


template<class K, class V>
class AVLTree
{
	typedef struct AVLTreeNode<K,V> node;
public:

	bool insert(const pair<K,V>& kv)
	{
		if (_root == nullptr)
		{
			_root = new node(kv);
			return true;
		}
		node* parent = nullptr;
		node* cur = _root;
		while (cur)
		{
			if (cur->_kv.first > kv.first)
			{
				parent = cur;
				cur = cur->_left;
			}
			else if (cur->_kv.first < kv.first)
			{
				parent = cur;
				cur = cur->_right;
			}
			else
			{
				return false;
			}
		}
		cur = new node(kv);
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
		//更新平衡因子与旋转
		while (parent)
		{
			if (parent->_left == cur)
			{
				parent->_bf--;
			}
			else
			{
				parent->_bf++;
			}
			if (parent->_bf == 0)
			{
				break;
			}
			else if (parent->_bf == 1 || parent->_bf == -1)
			{
				cur = parent;
				parent = parent->_parent;
			}
			else if (parent->_bf == 2 || parent->_bf == -2)
			{
				if (parent->_bf == -2 && cur->_bf == -1)
				{
					RotateR(parent);
				}
				else if (parent->_bf == 2 && cur->_bf == 1)
				{
					RotateL(parent);
				}
				else if (parent->_bf == 2 && cur->_bf == -1)
				{
					RotateRL(parent);
				}
				else if (parent->_bf == -2 && cur->_bf == 1)
				{
					RotateLR(parent);
				}
				break;
			}
			else
			{
				assert(false);
			}
			
			 
		}
		return true;

	}

	void InOrder()
	{
		
		_InOrder(_root);
		cout << endl;
	}

	bool IsBalance()
	{
		return _IsBalance(_root);
	}

	int Hight()
	{
		return _Hight(_root);
	}

private:

	int _Hight(node* root)
	{
		if (root == nullptr)
		{
			return 0;
		}
		int lefthight = _Hight(root->_left);
		int righthight = _Hight(root->_right);
		return lefthight > righthight ? lefthight + 1 : righthight + 1;
	}

	bool _IsBalance(const node* root)
	{
		if (root == nullptr)
		{
			return true;
		}
		int lefthight = _Hight(root->_left);
		int righthight = _Hight(root->_right);
		if (righthight - lefthight != root->_bf)
		{
			cout << root->_kv.first << "当前平衡因子异常" << endl;
			return false;
		}


		return abs(righthight - lefthight) < 2
			&& _IsBalance(root->_left)
			&& _IsBalance(root->_right);
	}


	void _InOrder(node* root)
	{
		if (root == nullptr)
		{
			return;
		}
		_InOrder(root->_left);
		cout << root->_kv.first << " ";
		_InOrder(root->_right);
	}
	//右旋
	void RotateR(node* parent)
	{
		node* subl = parent->_left;
		node* sublr = subl->_right;


		parent->_left = sublr;
		if (sublr)
		{
			sublr->_parent = parent;
		}

		node* pparent = parent->_parent;

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
		subl->_bf = parent->_bf = 0;
	}
	//左旋
	void RotateL(node* parent)
	{
		node* subr = parent->_right;
		node* subrl = subr->_left;

		parent->_right = subrl;
		subr->_left = parent;
		if (subrl)
		{
			subrl->_parent = parent;
		}

		node* pparent = parent->_parent;

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
		subr->_bf = parent->_bf = 0;

	}
	//右左旋
	void RotateRL(node* parent)
	{
		node* subr = parent->_right;
		node* subrl = subr->_left;

		int bf = subrl->_bf;

		RotateR(subr);
		RotateL(parent);

		if (0 == bf)
		{
			parent->_bf = subr->_bf = subrl->_bf = 0;
		}
		else if( -1 == bf)
		{
			//在subrl的左子树插入
			parent->_bf = subrl->_bf = 0;
			subr->_bf = 1;
		}
		else if (1 == bf)
		{
			//在subrl的右子树插入
			subr->_bf = subrl->_bf = 0;
			parent->_bf = -1;
		}
		else
		{
			assert(false);
		}
	}
	//左右旋
	void RotateLR(node* parent)
	{
		node* subl = parent->_left;
		node* sublr = subl->_right;

		int bf = sublr->_bf;

		RotateL(subl);
		RotateR(parent);

		if (bf == 0)
		{
			parent->_bf = subl->_bf = sublr->_bf = 0;
		}
		else if (bf == 1)
		{
			subl->_bf = -1;
			parent->_bf = 0;
			sublr->_bf = 0;
		}
		else if (bf == -1)
		{
			subl->_bf = 0;
			parent->_bf = 1;
			sublr->_bf = 0;
		}
		else
		{
			assert(false);
		}
	}

private:
	node* _root = nullptr;
};