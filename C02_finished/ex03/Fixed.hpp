/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:36:58 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/07 15:33:46 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

#define ZERO 0
#define cout std::cout
#define ERROR_CA "cannot assing anything :)"  
#define endl std::endl
//area2 = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)

class Fixed 
{
public:
	Fixed(int nb);                         
	Fixed(float nb);                       
	float toFloat(void) const;
private:
    int _rawBits;
    static int fractionel;
};

