#include <iostream>
#include <cctype>

#define ERROR_MSG "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int main(int ac, char **av)
{
	char *ptr;
	int i = 0;

	if(ac < 2)
		return(std::cerr << ERROR_MSG  << std::endl, 1);
	while(av[++i])
	{
		ptr = av[i];
		while(*ptr)
			*ptr = (char)toupper(*ptr), ptr++;
		std::cout << av[i];
	}
	std::cout << std::endl;
	return(0);	
}
