/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brolivei <brolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:59:40 by brolivei          #+#    #+#             */
/*   Updated: 2024/01/09 14:22:23 by brolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x_(0), y_(0)
{
}

Point::Point(const Fixed x, const Fixed y) : x_(x), y_(y)
{
}

Point::Point(const Point &other) : x_(other.x_), y_(other.y_)
{
}

Point&	Point::operator=(const Point &other)
{
	if (this != &other)
	{
		(Fixed)this->x_ = other.x_;
		(Fixed)this->y_ = other.y_;
	}
	return (*this);
}

Point::~Point()
{}

Fixed	Point::getX() const
{
	return (this->x_);
}

Fixed	Point::getY() const
{
	return (this->y_);
}
