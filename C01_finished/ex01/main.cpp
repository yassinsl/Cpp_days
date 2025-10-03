/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:13:02 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/29 11:44:03 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
        Zombie *z = NULL;
        z = z->zombieHorde(4, "Yassin");
        for(int i = 0; i < 4; ++i) 
		z[i].announce(z[i]);
        delete[] z;
}

