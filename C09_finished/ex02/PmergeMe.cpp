#include "PmergeMe.hpp"

void PmergeMe::display_after(void) {
  std::cout << "after: ";
  for (iterator it = this->container1.begin(); it != this->container1.end(); ++it) {
    if ((it + 1) != this->container1.end()) std::cout << *it << " ";
    else  std::cout << *it;
  }
  std::cout << std::endl;
}
template <typename T>
T PmergeMe::start_sort(T random_container) {
  if (random_container.size() <= 1) return random_container;
  if (random_container.size() == 2) {
    if (random_container[0] > random_container[1])
      std::swap(random_container[0], random_container[1]);
    return random_container;
  }
  pair_vector pairs_number;
  bool has_straggler = false;
  int straggler = 0;

  if (random_container.size() % 2 != 0) {
    typename T::iterator last = random_container.end();
    straggler = *last;
    random_container.erase(last);
    has_straggler = true;
  }

  for (typename T::iterator it = random_container.begin(); it != random_container.end(); it += 2) {
    int a = *it;
    int b = *(it + 1);
    if (a >= b)
      pairs_number.push_back(std::make_pair(a, b));
    else
      pairs_number.push_back(std::make_pair(b, a));
  }

  std::vector<int> sorted_larger;
  std::vector<int> pending;
  for (size_t i = 0; i < pairs_number.size(); ++i) {
    sorted_larger.push_back(pairs_number[i].first);
    pending.push_back(pairs_number[i].second);
  }
  sorted_larger = start_sort(sorted_larger);

  std::vector<int> main_chain = sorted_larger;
  for (size_t i = 0; i < pending.size(); ++i) {
    std::vector<int>::iterator pos = std::lower_bound(main_chain.begin(), main_chain.end(), pending[i]);
    main_chain.insert(pos, pending[i]);
  }
  if (has_straggler) {
    std::vector<int>::iterator pos = std::lower_bound(main_chain.begin(), main_chain.end(), straggler);
    main_chain.insert(pos, straggler);
  }

  T result(main_chain.begin(), main_chain.end());
  return result;
}

void PmergeMe::display_before(void) {
    struct timeval start, end, start1, end1;
    double total_time, total_time1;

    std::cout << "Before: ";
    for (iterator it = this->container1.begin(); it != this->container1.end(); ++it) {
        if ((it + 1) != this->container1.end()) std::cout << *it << " ";
        else  std::cout << *it;
    }
    std::cout << std::endl;

    gettimeofday(&start, NULL);
    this->container1 = this->start_sort(container1);
    gettimeofday(&end, NULL);

    gettimeofday(&start1, NULL);
    this->container2 = this->start_sort(container2);
    gettimeofday(&end1, NULL);

    total_time = (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);
    total_time1 = (end1.tv_sec - start1.tv_sec) * 1000000.0 + (end1.tv_usec - start1.tv_usec);

    this->display_after();
    std::cout << "Time to process a range of " << container1.size() << " element with std::vector :" << total_time << "us" << std::endl;
    std::cout << "Time to process a range of " << container1.size() << " element with std::deque :" << total_time1 << "us" << std::endl;
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

  while (*str && std::isspace(static_cast<unsigned char>(*str))) ++str;
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
