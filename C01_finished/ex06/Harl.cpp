/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:54:35 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/01 13:03:12 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	cout << "[DEBUG]" << endl;
        cout << DEBUG_MSG << endl; 
}

void Harl::info(void)
{
	cout << "[INFO]" << endl;
        cout << INFO_MSG << endl; 
}

void Harl::warning(void) 
{
	cout << "[WARNING]" << endl;
        cout << WARNING_MSG << endl; 
}

void Harl::error(void)
{
	cout << "[ERROR]" << endl;
        cout << ERROR_MSG << endl; 
}

void Harl::complain(str level)
{
        str levels[] = {DEBUG, INFO, WARNING, ERROR};
        void(Harl::*fptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
        for(int i = 0; i <= 3; i++)
		if(levels[i] == level)
		{
			while(i <= 3)
				(this->*fptr[i++])();
			return;
		}
	cout << ERROR_MSG2 << endl;
}
