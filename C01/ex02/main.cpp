#include <string>
#include <iostream>
using namespace std;

#define BRAIN_MSG "HI THIS IS BRAIN"
#define MEAD "\033[1;31m🧠 Memory Address\033[0m"
#define VALUE "\033[1;31mValue at that address:\033[0m"

void print_address(string *var, string* ptr, string& ref)
{
    cout << MEAD << endl;
    cout << "The memory address of the string variable is: " << var << endl;
    cout << "The memory address held by stringPTR is: " << ptr << endl;

    cout << "The memory address of the string reference is: " << &ref << endl;
}

void print_value(string var, string* ptr, string& ref)
{
    cout << VALUE << endl;
    cout << "The value of the string variable is: " << var << endl;
    cout << "The value pointed to by stringPTR: " << *ptr << endl;
    cout << "The value referred to by stringREF: " << ref << endl;
}

int main(void)
{
    string var = BRAIN_MSG;
    string* stringPTR = &var;
    string& stringREF = var;

    print_address(&var, stringPTR, stringREF);
    print_value(var, stringPTR, stringREF);
    return 0;
}
