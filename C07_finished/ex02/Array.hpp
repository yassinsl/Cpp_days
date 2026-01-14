#pragma once
#include <iostream>
#include <new>
#include <stdexcept>
#include <sstream>
#include <cstdlib>
#include <ctime>

template <class T>
class Array{
  private:
    unsigned int n;
    T *arr;
  public: 
    Array(): n(0), arr(NULL){}
    Array(unsigned int n):n(n){
        this->arr = new T[n]();
        std::cout << "Success Allocation" << std::endl;
    }
    Array(const Array &other){
      this->n =other.n;
      this->arr = new T[this->n];
      for(unsigned int i =0; i < this->n; ++i)
          this->arr[i] = other.arr[i];
    }
    Array& operator=(const Array &other){
     if(this !=  &other){
      this->n =other.n;
        this->arr = new T[this->n];
        for(unsigned int i =0; i < this->n; ++i)
            this->arr[i] = other.arr[i];
      }
     return *this;
    }
    unsigned int size()const {return this-> n;}
    T& operator[](int idx) {
     if(idx < 0) throw std::out_of_range("Error: index < 0");
     if((unsigned int )idx >= this->n)
     {
       std::stringstream ss;
       if(!n) ss << "the array is Empty !!"; 
       else ss << "Index out of range (valid range: 0 to " <<(n -1);
       throw std::out_of_range(ss.str());
     }
     return this->arr[idx];
  } 
    ~Array(){
    delete[] this->arr;
    }

};

