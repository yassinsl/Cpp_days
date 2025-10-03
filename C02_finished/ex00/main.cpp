/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:39:57 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/02 10:57:03 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	cout << a.getRawBits() << endl;
	 a.setRawBits(2);
	cout << a.getRawBits() << endl;
	cout << c.getRawBits() << endl;
	return 0;
}
