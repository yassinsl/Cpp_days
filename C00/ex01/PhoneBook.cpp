/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:47:02 by ylahssin          #+#    #+#             */
/*   Updated: 2025/06/20 01:17:44 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"
#include <iostream>

#define ERROR_MSG "\033[31mplease enter just Search or ADD or Exit\033[0m"
#define MSG "\033[32mPLEASE Enter SEARCH OR ADD Or EXIT>> \033[0m"
#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

void get_content(PhoneBook contact)
{
	if(contact.idx == 8)
		contact.idx = 0; 
	std::add_fuction(contact.contacts[contact.idx++]);
}
int get_data_from_user(PhoneBook contact)
{
	string cmp;
	std::cout << MSG;
	std::cin >> cmp;
	switch(cmp)
	{
		case "ADD":
			get_content(contact);
			break;
	}
}
int main(void)
{
	PhoneBook Create_Contact;

	while(1)
		if(get_data_from_user(Create_Contact))
			ft_error_msg(ERROR_MSD);
	return 0;
}
