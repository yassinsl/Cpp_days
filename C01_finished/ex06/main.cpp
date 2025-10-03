/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:14:34 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/01 13:03:40 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl Harl;

	if(ac != 2) return(cout << ERROR_MSG2 << endl, 1);
	Harl.complain(str(av[1]));	
	return 0;
}
