#include "BitcoinExchange.hpp"
void parse_input( char *Filename , map &parse_cs);
int main(int ac, char **av)
{
  //TODO: <string double> 
  map parse_cs;

  try
  {
    if (ac != 2){
      throw std::invalid_argument("Error: could not open file.");
    }
    parse_cvs(parse_cs);
    parse_input(av[ac - 1], parse_cs); 
  }
  catch(std::exception &e){std::cout << e.what() << std::endl;}
  return 0;
}