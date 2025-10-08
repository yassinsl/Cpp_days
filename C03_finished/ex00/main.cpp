/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:53:57 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/08 15:55:17 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Yassin");
	ClapTrap b("Reda");

	a.attack("Reda");
	b.takeDamage(5);
	b.beRepaired(3);
}
