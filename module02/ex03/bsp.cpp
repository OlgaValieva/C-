/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:20:51 by carys             #+#    #+#             */
/*   Updated: 2022/10/31 12:51:31 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed _a, _b, _c;
    
    _a = (a.getX() - point.getX()) * (b.getY() - a.getY()) -(b.getX() - a.getX()) * (a.getY() - point.getY());
    _b = (b.getX() - point.getX()) * (c.getY() - b.getY()) -(c.getX() - b.getX()) * (b.getY() - point.getY());
    _c = (c.getX() - point.getX()) * (a.getY() - c.getY()) -(a.getX() - c.getX()) * (c.getY() - point.getY());
    if ((_a > 0 && _b > 0 && _c > 0) || (_a < 0 && _b < 0 && _c < 0))
        return(true);
    else
        return (false);
}