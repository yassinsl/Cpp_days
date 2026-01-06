#pragma once

#include <iostream>
#include <cstdlib>
#include <cerrno>
#include <cstring>
#include <cmath>
#include <climits>
#include <exception>
#include <cctype>

#define ERORR_ARC "Usage: ./convert <literal>"
#define SUCCESS 0
#define FAIL 1
#define VALIDITE_ARGS "Invalid argument"

typedef std::string string;

class ScalarConverter
{
  public:
    static void convert(const string &literal);
};

class ExceptionError : public std::exception
{
  public:
    virtual const char *what() const throw();
};

int  IsPseudoLiteral(const string &s);
double GetPsudoLiteral(const string &s);
int  Check_validite_argement(const string &literal, double *base, int &is_float);
int  CPseudoLiteral(double &base);
void print_char(double base);
void print_int(double base);
void print_convert(double base, int &is_float);
int  printLn(const std::string &msg, int status);
void print_float(double base, int is_float);
void print_double(double base, int is_float);
