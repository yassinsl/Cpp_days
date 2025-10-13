/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:18:41 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/13 15:13:05 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#define CREATE_SCAVTRAP "The ScavTrap Constarctor Created"
#define D_SCAVTRAP "The ScavTrap is destoryed" 
typedef std::string str;
class ScavTrap:public ClapTrap{
	public:
		ScavTrap(str name);
		~ScavTrap();
		void attack(const str &target);
		void guardGate();
};

