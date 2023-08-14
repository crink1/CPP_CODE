#pragma once
#include<iostream>
using namespace std;
namespace crin
{
	template<class T>
	 struct _List_Node
	{
		 _List_Node(const T& x = T())
			 :_data(x)
			 , prev(nullptr)
			 , next(nullptr)
		 {}
		T _data;
		_List_Node* prev;
		_List_Node* next;
	};
	 template<class T>
	 struct _List_Iterator
	 {
		 typedef _List_Node<T> Node;
		 typedef _List_Iterator<T> iterator;
		 Node* _Node;

		 _List_Iterator(Node* Node)
			 :_Node(Node)
		 {}
		 bool operator!=(const iterator& it)
		 {
			 return _Node != it._Node;
		 }
		 bool operator==(const iterator& it)
		 {
			 return _Node == it._Node;
		 }


		 T& operator*()
		 {
			 return _Node->_data;
		 }

		 iterator& operator++()
		 {
			 _Node = _Node->next;
			 return *this;
		 }

		 iterator& operator--()
		 {
			 _Node = _Node->prev;
			 return *this;
		 }

		 iterator operator++(int)
		 {
			iterator tmp(*this);
			 _Node = _Node->next;
			 return tmp;
		 }

		 iterator operator--(int)
		 {
			 iterator tmp(*this);
			 _Node = _Node->prev;
			 return tmp;
		 }

	 };


	 template<class T>
	 class List
	 {
		 typedef _List_Node<T> Node;
		
	 public:
		 typedef _List_Iterator<T> iterator;
		 iterator begin()
		 {
			 return _head->next;
		 }
		 iterator end()
		 {
			 return _head;
		 }
		 iterator insert(iterator pos,const T& x)
		 {
			 Node* next = pos._Node;
			 Node* newnode = new Node(x);
			 Node* prev = next->prev;
			 newnode->next = next;
			 newnode->prev = prev;
			 prev->next = newnode;
			 next->prev = newnode;
			 _size++;
			 return iterator(newnode);
		 }

		 List()
		 {
			 empty_init();
		 }
		 List( List<T>& lt)
		 {
			 empty_init();
			 for (auto d : lt)
			 {
				 push_back(d);
			 }
		 }

		 void swap(List<T>& lt)
		 {
			 std::swap(_head, lt._head);
			 std::swap(_size, lt._size);
		 }
		 List<T>& operator=(List<T> lt)
		 {
			 swap(lt);
			 return *this;
		 }


		 void clear()
		 {
			 iterator it = begin();
			 while (it != end())
			 {
				 it = erase(it);
			 }
		 }
		 
		 ~List()
		 {
			 clear();
			 delete _head;
			 _head = nullptr;
		 }


		 void push_back(const T& x)
		 {
			 /*Node* newnode = new Node(x);
			 Node* next = _head->prev;
			 newnode->next = _head;
			 newnode->prev = next;
			 _head->prev = newnode;
			 next->next = newnode;
			 _size++;*/
			 insert(end(), x);

		 }
		 void push_front(const T& x)
		 {
			 insert(begin(), x);
		 }
		
		 iterator erase(iterator pos)
		 {
			 Node* prev = pos._Node->prev;
			 Node* next = pos._Node->next;
			 prev->next = next;
			 next->prev = prev;
			 delete pos._Node;
			 _size--;
			 return iterator(next);
		 }

		 void pop_back(iterator pos)
		 {
			 erase(--end());
		 }
		 void pop_front(iterator pos)
		 {
			 erase(begin());
		 }
		 size_t size()
		 {
			 return _size;
		 }





	 private:
		 void empty_init()
		 {
			 _head = new Node;
			 _head->next = _head;
			 _head->prev = _head;
			 _size = 0;
		 }
		 Node* _head;
		 size_t _size;
	 };
}