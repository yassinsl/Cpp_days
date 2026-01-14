#include "easyfind.hpp"
int main()
{
    try {
        std::vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        auto it = easyfind(v, 20);
        std::cout << "Found in vector: " << *it << std::endl;

        easyfind(v, 99); // should throw
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        std::list<int> l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);

        auto it = easyfind(l, 3);
        std::cout << "Found in list: " << *it << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        std::deque<int> d;
        d.push_back(7);
        d.push_back(8);
        d.push_back(9);

        auto it = easyfind(d, 7);
        std::cout << "Found in deque: " << *it << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
