/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:55:56 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/29 11:44:07 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define BRIN_MSG ": BraiiiiiiinnnzzzZ...\n"

typedef std::string str;

class Zombie
{
	private:
		str name;
	public:
		void announce(Zombie z);
		Zombie* zombieHorde( int N, std::string name );
};
