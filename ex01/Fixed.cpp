/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/23 14:25:08 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/26 16:37:47 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _x(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int a)
{
    std::cout << "Int constructor called" << std::endl;
    _x = a * pow(2, _y);
}


Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    _x = round(f * pow(2, _y));
}

Fixed::Fixed(const Fixed& F)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(F);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed& F)
{
    if (this == &F)
        return ;
    std::cout << "Copy assignment operator called" << std::endl;
    _x = F._x;
}


int   Fixed::getRawBits(void) const
{
    std::cout << "getRawbits member function called" << std::endl;
    return(_x);
}

void Fixed::setRawBits(int const raw)
{
    _x = raw;
}

float Fixed::toFloat(void) const
{
    return (float(_x) / float(1 << _y));
}

int Fixed::toInt(void) const
{
    return(_x / (1 << _y));
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat();
    return (out);
}