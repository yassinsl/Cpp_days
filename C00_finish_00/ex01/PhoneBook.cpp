/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:28:19 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/02 13:56:41 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void check_input(str input, PhoneBook &Content, int *check)
{
		if(input == ADD)
		{
			if(Content.contacts[Content.idx].Add(Content) == -1)
				ft_error_msg(ADD_ERROR_MSG), *check = -1;
		}	
		else if(input == SEARCH)
			*check = Content.contacts[Content.idx].Search(Content);
		else if(input == EXIT)
			std::cout << GREEN EXIT RESET << std::endl, *check = -1; 
		else
			ft_error_msg(ERROR_MSG);
}

int main(void)
{
	str input;
	PhoneBook Content;
	int check;

	Content.idx = 0;
	check = 1;
	std::cout << START_MSG << std::endl << E_MSG;
	while(check != -1)
	{
		if(check!= -1)
			std::cout<< PROMPT;
		if(!std::getline(std::cin, input)) break;
		check_input(input, Content, &check);
	}
}
