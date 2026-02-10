#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <utility>
#include <cctype>
#include <climits>
#include <stdexcept>

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

  template <typename T>
  void start_sort(T &r_container);

  template <typename T>
  pair_vector build_pair_container(T &r_container);
};

template <typename T>
pair_vector PmergeMe::build_pair_container(T &r_container) {
  pair_vector pairs;

  typename T::iterator it = r_container.begin();
  while (it != r_container.end() && (it + 1) != r_container.end()) {
    pairs.push_back(std::make_pair(*it, *(it + 1)));
    it += 2;
  }
  return pairs;
}

static void swap_vec(std::vector<int> &arr, size_t i, size_t j) {
  int tmp = arr[i];
  arr[i] = arr[j];
  arr[j] = tmp;
}

static void sort_arr(std::vector<int> &arr, size_t n) {
  if (n > 0) {
    for (size_t i = 0; i < n; ++i) {
      if (arr[i] > arr[n - 1])
        swap_vec(arr, i, n - 1);
    }
    sort_arr(arr, n - 1);
  }
}

template <typename T>
void PmergeMe::start_sort(T &random_container) {
  int straggeler = 0;
  std::vector<int> hi_list;
  std::vector<int> low_list;

  if (random_container.size() % 2) {
    straggeler = random_container.back();
    random_container.pop_back();
  }
  pair_vector pairs = build_pair_container(random_container);
  for (pair_vector::iterator it = pairs.begin(); it != pairs.end(); ++it) {
    if (it->first < it->second)
      std::swap(it->first, it->second);
    hi_list.push_back(it->first);
    low_list.push_back(it->second);
  }
  sort_arr(hi_list, hi_list.size());
  for(pair_vector::iterator pair = pairs.begin(); pair != pairs.end(); ++pair
  {
      std::vector<int>::iterator it = std::find(hi_list.begin(), hi_list.end(), pair->first);
      if(it == hi_list.end()) std::invalid_argument("Error");
      int pos = std::distance(hi_list.begin(), it);

  }
}

void PmergeMe::display_before(void) {
  std::cout << "Before: ";
  for (iterator it = this->container1.begin(); it != this->container1.end(); ++it) {
    if ((it + 1) != this->container1.end()) std::cout << *it << " ";
    else  std::cout << *it;
  }
  std::cout << std::endl;
}

bool PmergeMe::is_space(char *str) {
  while (*str && std::isspace(static_cast<unsigned char>(*str)))
    ++str;
  return (*str == '\0');
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) {
  if (this != &other) {
    this->container1 = other.container1;
    this->container2 = other.container2;
  }
  return *this;
}

int PmergeMe::atoi(char *str) {
  int sign = 1;
  long long value = 0;

  while (*str && std::isspace(static_cast<unsigned char>(*str)))
    ++str;
  if (*str == '-' || *str == '+') {
    if (*str == '-')
      sign = -1;
    ++str;
  }
  if (!std::isdigit(static_cast<unsigned char>(*str)))
    throw std::invalid_argument("Error");
  while (*str && std::isdigit(static_cast<unsigned char>(*str))) {
    value = value * 10 + (*str - '0');
    ++str;
    if ((sign == 1 && value > INT_MAX) ||
        (sign == -1 && value > -(long long)INT_MIN))
      throw std::out_of_range("Error");
  }
  if (!is_space(str))
    throw std::invalid_argument("Error");
  return static_cast<int>(value * sign);
}

PmergeMe::PmergeMe(const PmergeMe &other) {
  this->container1 = other.container1;
  this->container2 = other.container2;
}

PmergeMe::PmergeMe(char **args) {
  int value;

  for (int i = 1; args[i]; ++i) {
    value = this->atoi(args[i]);
    if (value < 0)
      throw std::invalid_argument("Error");
    this->container1.push_back(value);
    this->container2.push_back(value);
  }
}

int main(int ac, char **av) {
  try {
    if (ac < 2)
      throw std::invalid_argument("Error");
    PmergeMe sorted_obj(av);
    sorted_obj.display_before();
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
}
