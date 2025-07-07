/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 11:59:50 by ylahssin          #+#    #+#             */
/*   Updated: 2025/07/07 16:44:06 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

void CHANGE_TO_UPPER(char *ptr, int j) 
{
	while(ptr[++j]) 
		ptr[j] = (ptr[j] >= 'a' && ptr[j] <= 'z') ? ptr[j] - 32 : ptr[j];
}

int main(int ac, char **av)
{
  int i = 1;
  int j;
  if(ac < 2)
      return(std::cout << ERRORMSG << std::endl, 1);
  while(av[i])
  {
    j = -1;
    CHANGE_TO_UPPER(av[i], j);
    std::cout << av[i++];
  }
  std::cout << std::endl;
  return(0);
}
