/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 11:36:36 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/29 11:36:48 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, str name)
{
        Zombie *z = new Zombie[N];
        for(int i = 0; i < N; ++i)
                z[i].name = name;
        return z;
}
