#pragma once

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <sstream> 
class Span{
  private:
    std::vector <int> array;
    unsigned int N;
  public:
    Span(unsigned int N);
    Span(Span const &other);
    Span &operator=(Span &other);
    ~Span();
    void addNumber(int Number);
    int longestSpan(void);
    int shortestSpan(void);
};
