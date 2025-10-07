/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylahssin <ylahssin@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:23:01 by ylahssin          #+#    #+#             */
/*   Updated: 2025/10/07 15:32:52 by ylahssin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"
#include "Point.hpp"

class Point {
        private:
                Fixed const x;
                Fixed const y;
        public:
                Point();
                Point(float x, float y);
                Point(Point &obj);
                Point& operator=(Point &Obj);
                ~Point();
                Fixed getX() const;
                Fixed getY() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
float calculate_area(Point const &a,  Point const &b,  Point const &c);
