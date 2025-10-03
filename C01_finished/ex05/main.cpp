/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 10:14:34 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/01 11:55:15 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl Harl;
	
	Harl.complain(DEBUG);
	Harl.complain(INFO);
	Harl.complain(WARNING);
	Harl.complain(ERROR);
}
