#include"Bureaucrat.hpp"
#include <iostream>

static void line(const char* title) {
    std::cout << "\n========== " << title << " ==========\n";
}

int main() {
    line("Default constructor + printing");
    try {
        Bureaucrat a;
        std::cout << a << std::endl;
    } catch (std::exception& e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    line("Valid construction");
    try {
        Bureaucrat b("Yassine", 3);
        std::cout << b << std::endl;
    } catch (std::exception& e) {
        std::cout << "Unexpected exception: " << e.what() << std::endl;
    }

    line("Constructor throws (too high: 0)");
    try {
        Bureaucrat c("BadHigh", 0);
        std::cout << c << std::endl; // should never run
    } catch (std::exception& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }

    line("Constructor throws (too low: 151)");
    try {
        Bureaucrat d("BadLow", 151);
        std::cout << d << std::endl; // should never run
    } catch (std::exception& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }

    line("Increment (grade 3 -> 2)");
    try {
        Bureaucrat e("IncTest", 3);
        std::cout << e << std::endl;
        e.incrementGrade();
        std::cout << e << std::endl; // grade should be 2
    } catch (std::exception& ex) {
        std::cout << "Unexpected exception: " << ex.what() << std::endl;
    }

    line("Increment throws at grade 1");
    try {
        Bureaucrat f("Top", 1);
        std::cout << f << std::endl;
        f.incrementGrade(); // must throw
        std::cout << "ERROR: should not reach here\n";
    } catch (std::exception& ex) {
        std::cout << "Caught: " << ex.what() << std::endl;
    }

    line("Decrement throws at grade 150");
    try {
        Bureaucrat g("Bottom", 150);
        std::cout << g << std::endl;
        g.decrementGrade(); // must throw
        std::cout << "ERROR: should not reach here\n";
    } catch (std::exception& ex) {
        std::cout << "Caught: " << ex.what() << std::endl;
    }

    line("Copy + assignment");
    try {
        Bureaucrat h("Original", 42);
        Bureaucrat i(h);              // copy ctor
        Bureaucrat j("Other", 10);
        j = h;                        // assignment (name stays "Other", grade becomes 42)
        std::cout << "h: " << h << std::endl;
        std::cout << "i: " << i << std::endl;
        std::cout << "j: " << j << std::endl;
    } catch (std::exception& ex) {
        std::cout << "Unexpected exception: " << ex.what() << std::endl;
    }

    return 0;
}
 
