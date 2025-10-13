/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:52:36 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/13 19:53:27 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(str name):ClapTrap(name)
{

	HitPoint = 100;
	EnergPoint = 100;
	AttackDamage = 30;
}
FragTrap::~FragTrap(){cout << C_FRAGTRAP << endl;}

void FragTrap::highFivesGuys(void){cout << "FragTrap " << name << " request a positive high five" << endl;}

