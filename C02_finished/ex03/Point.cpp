/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:19:06 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/07 15:35:08 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed Point::getX() const{return this->x;} 
Fixed Point::getY() const {return this->y;} 
Point::~Point(){}
Point::Point():x(ZERO),y(ZERO){}

Point::Point(float x, float y):x(Fixed(x)) , y(Fixed(y)){}

Point::Point(Point &obj):x(obj.x), y(obj.y){}

Point& Point::operator=(Point &obj){(void)obj; cout << ERROR_CA << endl; return *this;}

