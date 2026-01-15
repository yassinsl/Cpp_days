#pragma once

#include <iostream>
#include <climits>
#include <algorithms>
#include <vector>
#include <sstream> 
class Span{
  private:
    std::vector <int> array;
    unsigned int N;
  public:
    Span(unsigned int N);
    Span(Span &other);
    Span &Span(Span &other);
    ~Span();
    void addNumber(int Number);
    int longestSpan(void);
    int shortSpan(void);
};
int Span::shortSpan(void)
{
  if(this->array.size() > this->N)
    throw std::out_of_range("Error: The array is full");
  std::vector<int>copy(this->array);
  std::sort(copy.begin(), copy.end());
  std::vector<int>:iterator it = copy.begin();
  int minspan = *(it + 1) - *it;
  it++;
  for( it : copy){
    int deff = *it - *(it - 1);
    if(deff < minspan) minspan = deff
  }
  return minspan;
}
Span::Span(unsigned int N): N(N){}
Span::Span(Span &other){this->N = other.N;}
Span& Span::Span(Span &other){
  if(this != &other) this->N = other.N;
  return *this;
}
Span::~Span(){}
void Span::addNumber(int Number){
  stringstream ss;
  if(this->array.size() > this->N)
    throw std::out_of_range("Error: The array is full");
  this->array.push_back(N);
}
int Span::longestSpan(void){
  if(this->array < 2) throw std::logic_error("Not enough elements to find a span");
  int min = *std::min_element(this->array.begin(), this->array.end());
  int max = *std::max_element(this->array.begin(), this->array.end());
  return max - min;
}

