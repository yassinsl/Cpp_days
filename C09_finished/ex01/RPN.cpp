#include "RPN.hpp"

int add(int a, int b){return a + b;}

int sub(int a, int b){return a - b;}

int mul(int a, int b){return a * b;}

int dive(int a, int b){
  if(!b) throw std::runtime_error("Math Error: Attempted to divide no zero!");
  return a / b;
}

bool check_operator(char op){return (op == '+' || op == '-' || op == '*' || op == '/');} 

std::vector<std::string> split(char *str, const char *delims) {
    std::vector<std::string> result;
    char *token = std::strtok(str, delims);
    while (token) {
        result.push_back(token);
        token = std::strtok(NULL, delims);
    }
    return result;
}

void get_value(std::stack<int> &stack, char c){
 int (*calucaltion[4])(int, int) = {add, sub, mul ,dive};
 std::string op = "+-*/";

  if(stack.empty())
    throw std::invalid_argument("Error: Empty Stack");
  else if (stack.size() == 1)
    throw std::invalid_argument("Error: stack has fewer than two operands before applying an operator");
  int right = stack.top();
    stack.pop();
  int left = stack.top();
    stack.pop();
  for (size_t i = 0 ; i < op.size(); ++i)
    if(op[i] == c)
      stack.push((*calucaltion[i])(left, right));
}

void display_value(std::stack<int> & stack){
  if(stack.size() != 1 || stack.empty())
    throw std::invalid_argument("Error: Empty Stack or Invalid Argument");
  std::cout << stack.top() << std::endl;
}

void Reverse_Polish_Notation(char *str){
  std::stack<int> reverse_stack;

  std::vector<std::string> tokens = split(str, " \n\t\r\v");
  for(iterator it = tokens.begin(); it != tokens.end(); ++it){
    if(it->size() != 1) throw(std::invalid_argument("Error : Invalid Size in Argements"));
    else if(std::isdigit(static_cast<unsigned char>((*it)[0])))
       reverse_stack.push((*it)[0] - 48);
    else if(check_operator(static_cast<char>((*it)[0])))
      get_value(reverse_stack, (*it)[0]);
    else throw(std::invalid_argument("Error : Invalid Operator & Number"));
  }
  display_value(reverse_stack);
}
