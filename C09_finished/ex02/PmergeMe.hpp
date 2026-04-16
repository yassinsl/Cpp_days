#pragma once 

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <utility>
#include <cctype>
#include <climits>
#include <stdexcept>
#include <cmath>
#include <ctime>
#include <sys/time.h>

typedef std::vector<int>::iterator iterator;
typedef std::vector<std::pair<int, int> > pair_vector;

class PmergeMe {
private:
  std::vector<int> container1;
  std::deque<int>  container2;
public:
  PmergeMe(const PmergeMe &other);
  PmergeMe &operator=(const PmergeMe &other);
  PmergeMe(char **args);

  bool is_space(char *str);
  void display_before(void);
  int atoi(char *str);
  void display_after(void);

  template <typename T>
  T start_sort(T random_container);

};

