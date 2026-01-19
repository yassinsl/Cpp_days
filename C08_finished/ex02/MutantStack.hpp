#pragma once 
#include <algorithm>
#include <stack>
#include <iostream>

template <class T>
class MutantStack : public std::stack<T>
{
  public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack(){}
    MutantStack(MutantStack &other){}
    MutantStack & operator=(MutantStack &other){}
    void push(int num){this->c.push_back(num);}
    void pop(){this->c.pop_back();}
    T& top(){return this->c.back();}
    int size(){return this->c.size();}
    iterator  begin() {return this->c.begin();}
    iterator begin() const {return this->c.begin();}
    iterator end() {return this->c.end();};
    iterator end() const {return this->c.end();}
};
