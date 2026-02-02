#pragma once

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <stack>
#include <cctype>
#include <cstring>
#include <vector>

#define INVALID_ARGS "Error: Invalid Argements"
typedef std::vector<std::string>::iterator iterator;

void Reverse_Polish_Notation(char *str);
