/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:38:56 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/13 15:12:15 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap n("yassin");
	n.attack("uyassfijhdskf");
	n.guardGate();
	n.takeDamage(23);
	n.beRepaired(20);
}
