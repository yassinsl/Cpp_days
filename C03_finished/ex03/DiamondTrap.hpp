/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:31:46 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/15 18:09:24 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
     private:
   		 std::string name;
	 public:
	 	DiamondTrap(str name);
	   ~DiamondTrap();
	   DiamondTrap(DiamondTrap &obj);
		 void whoAmI(void);
         void attack(const str &target);
		 DiamondTrap& operator=(DiamondTrap &obj);
};

