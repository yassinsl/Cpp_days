/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 09:15:16 by ylahssin          #+#    #+#             */
/*   Updated: 2025/09/29 10:00:21 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include <string>

typedef std::string str;
#define BRIN_MSG ": BraiiiiiiinnnzzzZ...\n"
#define ZOMBIE_HERE "🧟 \033[0;31mBe careful! The zombie is in your house.\033[0m\n"
#define DEAD "💀 \033[0;32mthe zombie is dead bro\033[0m"

class Zombie{
  private: 
      str name;
      void announce(void);
  public :
      Zombie(str name);
      Zombie* newZombie(std::string name);
      void randomChump( std::string name );
      ~Zombie();
};
