#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
  map parse_cs;
  try{
  if (ac != 2)
    throw std::invalid_argument("Error: could not open file.");
      parse_cvs(parse_cs);
      parse_input(av[ac - 1], parse_cs); 
  }
  catch(std::exception &e){std::cout << e.what() << std::endl;}
}
