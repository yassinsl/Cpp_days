/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:52:18 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/01 13:01:17 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#define DEBUG "DEBUG"
#define DEBUG_MSG \
                "I love having extra bacon for"\
                "my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
#define INFO "INFO"
#define INFO_MSG \
                "I cannot believe adding extra bacon costs more money."\
                "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING "WARNING"
#define WARNING_MSG \
                "I think I deserve to have some extra bacon for free. I’ve been coming for"\
                "years whereas you started working here since last month."
#define ERROR "ERROR"
#define ERROR_MSG "This is unacceptable! I want to speak to the manager now."
#define ERROR_MSG2 "[ Probably complaining about insignificant problems ]"
#define cout std::cout
#define endl std::endl

typedef std::string str;

class Harl
{
        private:
                void debug(void);
                void info(void);
                void warning(void);
                void error(void);
        public:
                void complain( std::string level );
                void (*fptr[4])();
};
