/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:51:53 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/29 12:22:14 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define BRAIN "HI THIS IS BRAIN"	
#define AD_STR "memory address of the string variable is: "
#define AD_PTR "The memory address held by stringPTR is: "
#define AD_REF "The memory address held by stringREF: "
#define VAL_STR "The value of the string variable is: "
#define VAL_PTR "The value pointed to by stringPTR is: "
#define VAL_REF "The value pointed to by stringREF is: "
typedef std::string str;

int main(void)
{
	str string = BRAIN;
	str *stringPTR = &string;
	str &stringREF = string;
	//here print address each var	
	std::cout << AD_STR << &string <<std::endl;
	std::cout << AD_PTR << stringPTR <<std::endl;
	std::cout << AD_REF << &stringREF <<std::endl;
	//print value the each var
	std::cout << VAL_STR << string <<std::endl;
	std::cout << VAL_PTR << *stringPTR  <<std::endl;
	std::cout << VAL_REF << stringREF <<std::endl;
	return 0;
}
