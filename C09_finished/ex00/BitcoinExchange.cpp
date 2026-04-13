#include "BitcoinExchange.hpp"
#include <fstream>
#include <climits>

//TODO:: create a FileNotFound class
FileNotFound::FileNotFound(const std::string &name_file) : std::runtime_error((std::string(CANNOT_OPEN_FILE) + name_file).c_str()) {}

FileNotFound::~FileNotFound() throw(){}

void parse_cvs(map &parse_cvs){
  std::ifstream InFile("./data.csv");
  if(!InFile.is_open()) throw FileNotFound("data.csv");
  std::string line, date;
  size_t pos;
  double num;

  while(std::getline(InFile, line))
  {
   line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
    if(line == "data,exchange_rate") continue;
    pos = line.find(",");
    date = line.substr(0, pos);
    num = std::strtod(line.substr(pos + 1).c_str(), NULL);
    parse_cvs[date] = num;
  }
} 

bool CheckYear(int n){
  if(n % 4 == 0){
    if(n % 100 == 0) return !(n % 400);
   return true;
  }
  return false;
}
bool parse_date(const std::string &date){
  struct tm time_input;
  time_t result;

  if(!strptime(date.c_str(), DATE, &time_input)) {
      std::cerr << "Error: bad input => " << date << std::endl;
      return false;
  }
  if((result = mktime(&time_input)) == -1) {
      std::cerr << "Error: mktime failed" << std::endl;
      return false;
  }
  int year = time_input.tm_year + 1900;
  int month = time_input.tm_mon + 1;
  int day = time_input.tm_mday;
  
  if(year < 2009) {
      std::cerr << "Error: bad input => " << date << std::endl;
      return false;
  }
  if(month < 1 || month > 12) {
      std::cerr << "Error : Bad Input" << std::endl;
      return false;
  }
  if(month == 2) {
      int maxDay = CheckYear(year) ? 29 : 28;
      if(day < 1 || day > maxDay) {
          std::cerr << "Error : Bad Input" << std::endl;
          return false;
      }
  }
  else if(month == 4 || month == 6 || month == 9 || month == 11) {
      if(day < 1 || day > 30) {
          std::cerr << "Error : Bad Input" << std::endl;
          return false;
      }
  }
  else {
      if(day < 1 || day > 31) {
          std::cerr << "Error : Bad Input" << std::endl;
          return false;
      }
  }
  return true;
}
double parse_number(std::string str){
  char *end;
  double number = std::strtod(str.c_str(), &end);

  if(*end && end == str){
    std::cerr << "Error: Invalid Char"<< std::endl;
    return -1.0;
  }
  else if(number < 0.0){
    std::cerr << "Error: not a positive number" << std::endl; 
    return -1.0;
  }
  else if(number > 1000.0){
    std::cerr << "Error: too large a number" << std::endl; 
    return -1.0;
  }
  return number;
}

void parse_input( char *Filename , map &parse_cs){
  std::ifstream InFile(Filename);
  if(!InFile.is_open()) throw FileNotFound(Filename);
  std::string line, date;
  size_t pos;
  double num;
  while(std::getline(InFile, line)){
    line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
    if(line == "date|value") continue;
    if((pos = line.find(PIPE)) == std::string::npos) {
      std::cerr << "Error: bad input => " << line << std::endl; 
      continue;
    }
    //TODO: Check if the date valid 
     if(!parse_date((date = line.substr(0, pos)))) continue;
     if((num = parse_number(line.substr(pos + 1))) == -1.0) continue;
     map::iterator it = parse_cs.lower_bound(date);
     if(it->first != date) --it;
     std::cout << date << " => " << num * it->second << std::endl;
  } 
}
