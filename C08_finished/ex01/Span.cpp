#include "Span.hpp"

int Span::shortestSpan(void)
{
  if(this->array.size() < 2) throw std::logic_error("Not enough elements to find a span");
  std::vector<int>copy(this->array);
  std::sort(copy.begin(), copy.end());
  std::vector<int>::iterator it = copy.begin();

  int minspan = *(it + 1) - *it;
  it++;
  for(; it != copy.end(); ++it){
    int deff = *it - *(it - 1);
    if(deff < minspan) minspan = deff;
  }
  return minspan;
}

Span::Span(unsigned int N): N(N){}

Span::Span(Span const &other){this->N = other.N;}

Span& Span::operator=(Span &other){
  if(this != &other) this->N = other.N;
  return *this;
}

Span::~Span(){}
void Span::addNumber(int Number){
  if(this->array.size() > this->N)
    throw std::out_of_range("Error: The array is full");
  this->array.push_back(Number);
}

int Span::longestSpan(void){
  if(this->array.size() < 2) throw std::logic_error("Not enough elements to find a span");
  int min = *std::min_element(this->array.begin(), this->array.end());
  int max = *std::max_element(this->array.begin(), this->array.end());
  return max - min;
}
