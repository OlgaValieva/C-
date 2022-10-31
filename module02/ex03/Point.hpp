/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:21:09 by carys             #+#    #+#             */
/*   Updated: 2022/10/31 12:26:10 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>  
#include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &point);
        Point &operator = (const Point &point);
        ~Point();

        Fixed const getX() const;
        Fixed const getY() const;
        
    private:
        Fixed const x;
        Fixed const y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
//std::ostream &operator << (std::ostream &outstr, const Fixed &fixed);

#endif