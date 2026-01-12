#pragma once
#include <iostream>
#include <new>
#include <stdexcept>
template <class T>
class Array{
  private:
    unsigned int n;
    T *arr;
  public: 
    Array(): n(0), arr(NULL){}
    Array(unsigned int n):n(n){
      try{
        this->arr = new T[n];
        for(int i =0; i < n; ++i)
            std::cout << "Element[i]: " << this->arr[i] << std::endl;
        std::cout << "Success Allocation" << std::endl;
      }
      catch(std::bad_alloc &e){
        std::cout << "Memory Allocation Failed: " << e.what() <<std::endl;
      }
    }
   Array(Array &other){
      this->n =other.n;
      try{
        this->arr = new T[this->n];
        for(int i =0; i < this->n; ++i)
            this->arr[i] = other.arr[i];
      }
      catch(std::bad_alloc &e){
        std::cout << "Memory Allocation Failed: " << e.what() <<std::endl;
      }
   }
   Array& operator=(Array &other){
     if(this !=  &other){
      this->n =other.n;
      try{
        this->arr = new T[this->n];
        for(int i =0; i < this->n; ++i)
            this->arr[i] = other.arr[i];
      }
      catch(std::bad_alloc &e){
        std::cout << "Memory Allocation Failed: " << e.what() <<std::endl;
      }
    }
     return *this;
   }
   unsigned int size()const {return this-> n;}
   void change_data(T data, int idx){
     if(idx >= this->n || idx < 0){
       std::string msg = "Index out of range (valid range: 0 to (" +  std::string(n - 1) + ")";
       throws std::out_of_range(msg);
       this->arr[idx]  = data;
     }
} 
};

