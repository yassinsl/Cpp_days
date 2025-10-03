/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Add_Contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:30:24 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/03 10:47:55 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int Contact::get_valid_phone(std::string &phone_number) 
{
    int check = 0;

    while (1) {
        std::cout << PHONE_NUMBER;
        if (!std::getline(std::cin, phone_number))
            return -1;
        for (size_t i = 0; i < phone_number.size(); ++i)
	{
            char c = phone_number[i];
            if (!(c >= '0' && c <= '9')) 
		{
                	check = 1;
			break;
		}
        }
        if (check == 1) 
	{
            ft_error_msg(PHONE_FAILED);
            check = 0;
        } 
	else
            break;
    }
    return 1;
}

int Contact::get_valid_last_name(std::string &last_name) 
{
    int check = 0;

    while (1) 
	{
    	std::cout << LAST_NAME;
        if (!std::getline(std::cin, last_name))
            return -1;
        for (size_t i = 0; i < last_name.size(); ++i)
	{
            char c = last_name[i];
            if (c != ' ' && !isalpha(c)) 
		{
                	check = 1;
			break;
		}
        }
        if (check == 1) 
	{
            ft_error_msg(NAME_FAILED);
            check = 0;
        } 
	else 
            break;
    }
    return 1;
}

int Contact::get_valid_name(std::string &name) 
{
    int check = 0;

    while (1) 
	{
    	std::cout << FIRST_NAME;
        if (!std::getline(std::cin, name))
            return -1;
        for (size_t i = 0; i < name.size(); ++i)
	{
            char c = name[i];
            if (c != ' ' && !isalpha(c)) 
		{
                	check = 1;
			break;
		}
        }
        if (check == 1) 
	{
            ft_error_msg(NAME_FAILED);
            check = 0;
        } 
	else 
            break;
    }
    return 1;
}

int Contact::get_valid_dark_secret(std::string &darck_secret) 
{
    int check = 0;

    while (1) 
	{
    	std::cout << DARCK_SECRET;
        if (!std::getline(std::cin, darck_secret))
            return -1;
        for (size_t i = 0; i < darck_secret.size(); ++i)
	{
            char c = darck_secret[i];
            if (c != ' ' && !isalpha(c)) 
		{
                	check = 1;
			break;
		}
        }
        if (check == 1) 
	{
            ft_error_msg(LAST_NAME_FAILED);
            check = 0;
        } 
	else 
            break;
    }
    return 1;
}

int Contact::Add(PhoneBook &Book)
{
    std::cout << ADD_MSG;
    static bool full = false;
    if (get_valid_name(Book.contacts[Book.idx].first_name) == -1) return -1;
    if (get_valid_last_name(Book.contacts[Book.idx].last_name) == -1) return -1;
    if (get_valid_phone(Book.contacts[Book.idx].phone_number) == -1) return -1;
    if (get_valid_dark_secret(Book.contacts[Book.idx].darck_secret) == -1) return -1;
    std::cout << NICK_NAME;
    if (!std::getline(std::cin, Book.contacts[Book.idx].nackname)) return -1;
    if (Book.contacts[Book.idx].first_name.empty()
        || Book.contacts[Book.idx].last_name.empty()
        || Book.contacts[Book.idx].phone_number.empty()
        || Book.contacts[Book.idx].darck_secret.empty()
        || Book.contacts[Book.idx].nackname.empty())
        return ft_error_msg(ADD_ERROR_MSG), 1;
    if (!full) {
        Book.num = Book.idx + 1;
        if (Book.num == 8) full = true;
    }
    Book.idx++;
    if (Book.idx == 8) Book.idx = 0;
    std::cout << SECCUSS << std::endl;
    return 1;
}

