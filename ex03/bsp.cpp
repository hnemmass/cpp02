/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:53:58 by hnemmass          #+#    #+#             */
/*   Updated: 2025/11/06 13:49:05 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

float area(Point const a, Point const b, Point const c)
{
	float area_abc;

	area_abc = (a.getx() * (b.gety() - c.gety())
			+ b.getx() * (c.gety() - a.gety())
			+ c.getx() * (a.gety() - b.gety())) / 2;
	if (area_abc >= 0)
		return (area_abc);
	return (area_abc * -1);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float area_abc;
	float area_pbc;
	float area_pac;
	float area_pab;

	area_abc = area(a, b, c);
	area_pbc = area(point, b, c);
	area_pac = area(a, point, c);
	area_pab = area(a, b, point);

	if (area_pbc == 0 || area_pac == 0 || area_pab == 0)
		return (false);
	if (area_abc == (area_pbc + area_pac + area_pab))
		return (true);
	return (false);
}