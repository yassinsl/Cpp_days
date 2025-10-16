/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:36:06 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/15 18:05:31 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#define C_FRAGTRAP "Constructor FragTrap Created :)"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(str name);
		FragTrap(FragTrap &obj);
		~FragTrap();
		FragTrap& operator=(FragTrap &obj);
		void highFivesGuys(void);
};
