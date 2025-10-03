/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 11:27:12 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/03 10:06:18 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <unistd.h>
#include <iomanip>
#include <cstdlib>

#define RED   "\033[0;31m"
#define GREEN "\033[0;32m"
#define PURPLE "\033[0;35m"
#define RESET  "\033[0m"
#define START_MSG RED "Welcome to PhoneBook! The phonebook is currently empty." RESET
#define E_MSG GREEN "\nPlease enter one of the following commands:\n" \
                        "  ADD    - Add a new contact\n" \
                        "  SEARCH - Search for an existing contact\n" \
                        "  EXIT   - Quit the program\n" RESET
#define PROMPT GREEN "Enter command (ADD, SEARCH, EXIT): " RESET
#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"
#define ADD_MSG PURPLE "Please Add New Account: \n"RESET
#define FIRST_NAME GREEN "First Name: " RESET
#define NICK_NAME GREEN "Nick Name: " RESET
#define LAST_NAME GREEN"Last Name: " RESET
#define PHONE_NUMBER GREEN"Phone Number: "RESET
#define DARCK_SECRET GREEN "Darck Secret: " RESET
#define ADD_ERROR_MSG RED "\nError: Contact not saved — no field can be empty." RESET
#define SECCUSS GREEN "SECCESS OF ADD a NEW ACCOUNT" RESET
#define ERROR_MSG RED "Please Enter Correct Input :)"
#define SEARCHING GREEN "Please Enter Index Number: " RESET
#define ERROR_SEACH RED"Please  Enter Range form 0 to idx\n"RESET
#define FLASH "\033[2J\033[1;1H"
#define CHOOSE_CONTACT GREEN"Please choose a contact:"RESET
#define ENTER_NUM RED "PLEASE Enter Correct Number! :("RESET
#define PHONE_FAILED RED "Invalid phone number."\
                        " Please enter digits only (and an optional leading '+')."RESET
#define NAME_FAILED RED "Invalid name. Please use letters only." RESET
#define LAST_NAME_FAILED RED "Invalid last name. Please use letters only." RESET
#define Dark_FAILED RED "Invalid darck secret. Please use letters only." RESET
#define SEARCH_ERROR RED "📛 Error: No contacts found in phonebook!" RESET

typedef std::string str;
class PhoneBook;

class Contact
{
	public:
		str first_name;
		str last_name;
		str nackname;
		str phone_number;
		str darck_secret;
		int  Add(PhoneBook &Book);
		int Search(PhoneBook &Book);
		int get_valid_phone(std::string &phone_number);
		int get_valid_name(std::string &first_name);
		int get_valid_last_name(std::string &last_name);
		int get_valid_dark_secret(std::string &darck_secret);
};

class PhoneBook
{
	public:
		Contact contacts[8];
		int idx;
		int num;
};

void check_input(str input, PhoneBook &Content, int *check);
void print_user(PhoneBook &Book, int num);
void printTable(const PhoneBook &Book);
str formatColumn(const str &str, int width);
void ft_error_msg(str msg);
