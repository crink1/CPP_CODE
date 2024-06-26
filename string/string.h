#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
namespace crin

{

    class string
    {
    public:
        
        typedef char* iterator;
        typedef const char* const_iterator;

    public:

        string(const char* str = "")
            :_size(strlen(str))
            ,_capacity(_size)
        {
            if (str == nullptr)
            {
                assert(false);
                return;
            }
            _str = new char[_capacity+1];
            strcpy(_str, str);
        }
        
        
        //现代写法
        string(const string& s)
            :_str(nullptr)
            ,_size(0)
            ,_capacity(0)
        {
            string tmp(s._str);
            swap(tmp);
        }
        string(string&& s)
            :_str(nullptr)
            , _size(0)
            , _capacity(0)
        {     
            swap(s);
        }
        /*string(const string& s)
        {
            _str = new char[s._capacity + 1];
            strcpy(_str, s._str);
            _size = s._size;
            _capacity = s._capacity;
        }*/

        //现代写法
        string& operator=(string s)
        {
            swap(s);
            return *this;
        }
        string& operator=(string&& s)
        {
            swap(s);
            return *this;
        }
       /* string& operator=(const string& s)
        {
            if (_capacity < s._capacity)
            {
                reserve(s._capacity);
            }
            strcpy(_str, s._str);
            _size = s._size;
            return *this;
        }*/

        ~string()
        {
            if (_str)
            {
                delete[] _str;
                _str = nullptr;
                _size = _capacity = 0;
            } 
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
                char* tmp = new char[n+1];
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
                reserve(_capacity == 0 ? 4 : _capacity * 2);
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
                    reserve(n);
 
                for (size_t i = _size; i < n; i++)
                {
                    _str[_size] = c;
                    ++_size;
                }
                _str[_size] = '\0';

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
            assert(pos < _size);
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

        size_t find(const char* s, size_t pos = 0) const
        {
            assert(pos < _size);
            for (size_t i = pos; i < _size; i++)
            {
                if (_str[i] == s[0])
                {
                    size_t j = i, k = 0;
                    while (_str[j] == s[k])
                    {
                        if (_str[j] == '\0' || s[k] == '\0')
                        {
                            break;
                        }
                        j++;
                        k++;

                    }
                    if (s[k] == '\0')
                    {
                        return i;
                    }
                }
            }
            return npos;
        }
        
        string substr(size_t pos, size_t len = npos)
        {
            string s;
            size_t end = pos + len;
            if (len == npos || pos + len > _size)
            {
                len = _size - pos;
                end = _size;

            }
            s.reserve(len);
            for (size_t i = pos; i < end; i++)
            {
                s += _str[i];
            }
            return s;
            
        }
        // 在pos位置上插入字符c/字符串str，并返回该字符的位置

        string& insert(size_t pos, char c)
        {
            assert(pos < _size);
            if (_size == _capacity)
            {
                reserve(_capacity == 0 ? 4 : _capacity * 2);
            }
            for (size_t i = _size+1; i > pos; i--)
            {
                _str[i] = _str[i - 1];
            }
            _str[pos] = c;
            _size++;
            return *this;
        }

        string& insert(size_t pos, const char* str)
        {
            assert(pos < _size);
            size_t len = strlen(str);

            if (len + _size > _capacity)
            {
                reserve(len + _size);
            }
            for (size_t end = _size+1; end > pos ; end--)
            {
                _str[end+len-1] = _str[end-1];
                
            }
            _size += len;
            //_str[_size] = '\0';
            strncpy(_str + pos, str, len);
            return *this;
        }



        // 删除pos位置上的元素，并返回该元素的下一个位置

        string& erase(size_t pos, size_t len)
        {
            assert(pos < _size);
            for (size_t i = pos + len; i <= _size; i++)
            {
                _str[pos++] = _str[i];
            }
            _size -= len;
            return *this;
        }

    private:

        char* _str;
        size_t _size;
        size_t _capacity;

        
        const static size_t npos;

    };
    const size_t string::npos = -1;

};

ostream& operator<<(ostream& _cout, const crin::string& s)
{
    for (auto c : s)
    {
        _cout << c;
   }
    return _cout;
}

istream& operator>>(istream& _cin, crin::string& s)
{
    /*char ch = _cin.get();
    while (ch != ' ' && ch != '\n')
    {
        s += ch;
        ch = _cin.get();
    }*/

    char buff[129];
    char ch = _cin.get();
    int i = 0;
    while (ch != ' ' && ch != '\n')
    {
        if (i <= 128)
        {
            buff[i++] = ch;
        }
        else
        {
            buff[i] = '\0';
            s += buff;
            i = 0;
        }
        ch = _cin.get();
    }
    if (i != 0)
    {
        buff[i] = '\0';
        s += buff;
    }
    return _cin;
}