/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:32:43 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/29 10:46:10 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(str name):name(name){std::cout << ZOMBIE_HERE;}

void Zombie::announce(void){std::cout << this->name <<  BRIN_MSG;}

Zombie::~Zombie(){std::cout <<DEAD << std::endl;}
