#pragma once
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <map>
#include <fstream>
#include <climits>
#include <cstdlib>
#include <time.h>

//define
#define CANNOT_OPEN_FILE "Error: Could Not Open File: "
#define PIPE "|"
#define DATE "%Y-%m-%d"

typedef std::map<std::string, double> map; 
typedef std::map<std::string, double>::iterator iterator; 

//TODO:: create a FileNotFound class

class FileNotFound : public std::runtime_error
{
  public:
    FileNotFound(const std::string &name_file);
    ~FileNotFound() throw();
};
void parse_input(const char *name, map &data);
void parse_cvs(map &parse_cs);
