#pragma once
template<class K>
struct Node
{
	struct Node<K>* left;
	struct Node<K>* right;
	K _key;
	Node(const K& key)
		:left(nullptr)
		,right(nullptr)
		,_key(key)
	{}
};


template<class K>
class BST
{
	typedef struct Node<K> node;
public:
	bool Insert(const K& key)
	{
		node* parent = nullptr;
		node* cur = _root;
		if (nullptr == _root)
		{
			_root = new node(key);
			return true;
		}
		while (cur)
		{
			parent = cur;
			if (cur->_key > key)
			{	
				cur = cur->left;
			}
			else if (cur->_key < key)
			{
				cur = cur->right;
			}
			else
			{
				return false;
			}
		}
		node* tmp = new node(key);
		if (parent->_key  > key)
		{
			parent->left = tmp;
		}
		else
		{
			parent->right = tmp;
		}
		return true;
	}

	bool Find(const K& key)
	{
		node* cur = _root;
		while (cur)
		{
			if (cur->_key > key)
			{
				cur = cur->left;
			}
			else if (cur->_key < key)
			{
				cur = cur->right;
			}
			else
			{
				return true;
			}
		}
		return false;
	}

	bool Erase(const K& key)
	{
		node* parent = nullptr;
		node* cur = _root;
		while (cur)
		{
			
			if (cur->_key > key)
			{
				parent = cur;
				cur = cur->left;
			}
			else if (cur->_key < key)
			{
				parent = cur;
				cur = cur->right;
			}
			else
			{
				if (nullptr == cur->left)
				{
					if (cur == _root)
					{
						_root = cur->right;
					}
					else
					{
						if (parent->left == cur)
						{
							parent->left = cur->right;
						}
						else
						{
							parent->right = cur->right;
						}
					}
					
				}
				else if (nullptr == cur->right)
				{
					if (cur == _root)
					{
						_root = cur->left;
					}
					else
					{
						if (parent->left == cur)
						{
							parent->left = cur->left;
						}
						else
						{
							parent->right = cur->left;
						}
					}
					
				}
				else
				{
					node* parent = cur;
					node* sub_right_min = cur->right;
					while (sub_right_min->left)
					{
						parent = sub_right_min;
						sub_right_min = sub_right_min->left;
					}
					swap(sub_right_min->_key, cur->_key);
					if (parent->left == sub_right_min)
					{
						parent->left = sub_right_min->right;
					}
					else
					{
						parent->right = sub_right_min->right;
					}

				}
				return true;
			}
		}
		return false;
	}

	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}

	bool FindR(const K& key)
	{
		return _FindR(_root,key);
	}


	bool EraseR(const K& key)
	{
		return _EraseR(_root,key);
	}
	
	bool InsertR(const K& key)
	{
		return _InsertR(_root, key);
	}
private:

	bool _InsertR(node*& root,const K& key)
	{
		if (root == nullptr)
		{
			root = new node(key);
			return true;
		}
		else
		{
			if (root->_key > key)
			{
				return _InsertR(root->left, key);
			}
			else if (root->_key < key)
			{
				return _InsertR(root->right,key);
			}
			else
			{
				return false;
			}
		}
	}

	bool _EraseR(node*& root, const K& key)
	{
		if (root == nullptr)
		{
			return false;
		}
		if (root->_key > key)
		{
			return _EraseR(root->left,key);
		}
		else if (root->_key < key)
		{
			return _EraseR(root->right,key);
		}
		else
		{
			if (root->left == nullptr)
			{
				node* del = root;
				root = root->right;
				delete del;
			}
			else if (root->right == nullptr)
			{
				node* del = root;
				root = root->left;
				delete del;
			}
			else
			{
				node* sub_right_min = root->right;
				while (sub_right_min->left)
				{
					sub_right_min = sub_right_min->left;
				}
				swap(root->_key, sub_right_min->_key);
				return  _EraseR(root->right, key);
			}
		}
	}

	bool _FindR(node* root,const K& key)
	{
		if (root == nullptr)
		{
			return false;
		}
		if (root->_key > key)
		{
			return _FindR(root->left);
		}
		else if(root->_key < key)
		{
			return _FindR(root->right);
		}
		else
		{
			return true;
		}
	}


	void _InOrder(node* root)
	{
		if (nullptr == root)
		{
			return;
		}
		_InOrder(root->left);
		cout<<root->_key<<" ";
		_InOrder(root->right);
	}

private:

	node* _root = nullptr;
};
