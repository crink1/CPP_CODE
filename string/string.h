#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
namespace crin

{

    class string

    {

        friend ostream& operator<<(ostream& _cout, const crin::string& s);

        friend istream& operator>>(istream& _cin, crin::string& s);

    public:

        typedef char* iterator;
        typedef const char* const_iterator;

    public:

        string(const char* str = "")
            :_size(strlen(str))
            ,_capacity(_size)
        {
            _str = new char[_capacity+1];
            strcpy(_str, str);
        }

        string(const string& s)
        {
            _str = new char[s._capacity];
            strcpy(_str, s._str);
            _size = s._size;
            _capacity = s._capacity;
        }

        string& operator=(const string& s)
        {
            _str = new char[s._capacity];
            strcpy(_str, s._str);
            _size = s._size;
            _capacity = s._capacity;
            return *this;
        }

        ~string()
        {
            delete[] _str;
            _str = nullptr;
            _size = _capacity = 0;
        }



        iterator begin()
        {
            return _str;
        }

        iterator end()
        {
            return _str + _size;
        }

       const_iterator begin() const
        {
            return _str;
        }

       const_iterator end() const
        {
            return _str + _size;
        }

        

        void reserve(size_t n)
        {
            if (n > _capacity)
            {
                char* tmp = new char[_capacity];
                strcpy(tmp, _str);
                delete[] _str;
                _str = tmp;
                _capacity = n;
            }
           

        }

        void push_back(char c)
        {
            if (_size == _capacity)
            {
                _capacity = _capacity == 0 ? 4 : _capacity * 2;
                reserve(_capacity);
            }
            _str[_size] = c;
            _size++;
            _str[_size] = '\0';
        }
      
        void append(const char* str)
        {
            size_t sz = strlen(str);
            if (_size + sz > _capacity)
            {
                reserve(_size + sz);
            }
            strcpy(_str + _size, str);
            _size += sz;

        }

        string& operator+=(char c)
        {
            push_back(c);
            return *this;
        }


        string& operator+=(const char* str)
        {
            append(str);
            return* this;
        }

        void clear()
        {
            _str[0] = '\0';
            _size =0;
        }

        void swap(string& s)
        {
            std::swap(_str, s._str);
            std::swap(_size, s._size);
            std::swap(_capacity, s._capacity);
        }
        const char* c_str()const
        {
            return _str;
        }

        


        size_t size()const
        {
            return _size;
        }

        size_t capacity()const
        {
            return _capacity;
        }

        bool empty()const
        {
            return _size == 0;
        }

        void resize(size_t n, char c = '\0')
        {
            if (n <= _size)
            {
                _size = n;
                _str[_size] = '\0';
            }
            else
            {

                for (size_t i = _size; i < n; i++)
                {
                    _str += c;
                }

            }
        }

        

        char& operator[](size_t index)
        {
            assert(index < _size);
            return _str[index];
        }

        const char& operator[](size_t index)const
        {
            assert(index < _size);
            return _str[index];
        }


        bool operator<(const string& s)
        {
            return strcmp(_str, s._str) < 0;
        }
        bool operator==(const string& s)
        {
            return strcmp(_str, s._str) == 0;
        }

        bool operator<=(const string& s)
        {
            return _str < s._str || _str == s._str;
        }

        bool operator>(const string& s)
        {
            return !(_str <= s._str);
        }

        bool operator>=(const string& s)
        {
            return !(_str < s._str);
        }

        

        bool operator!=(const string& s)
        {
            return !(_str == s._str);
        }



        // 返回c在string中第一次出现的位置

        size_t find(char c, size_t pos = 0) const
        {
            for (size_t i = pos; i < _size; i++)
            {
                if(_str[i] == c)
                {
                    return i;
                }
            }
            return npos;
        }

        // 返回子串s在string中第一次出现的位置

        size_t find(const char* s, size_t pos = 0) const;

        // 在pos位置上插入字符c/字符串str，并返回该字符的位置

        string& insert(size_t pos, char c);

        string& insert(size_t pos, const char* str);



        // 删除pos位置上的元素，并返回该元素的下一个位置

        string& erase(size_t pos, size_t len);

    private:

        char* _str;

        size_t _capacity;

        size_t _size;
        const static size_t npos;

    };
    const size_t string::npos = -1;

};