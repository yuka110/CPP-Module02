/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/23 14:25:08 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/26 16:38:38 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _x(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& F)
{
    std::cout << "Copy constructor called" << std::endl;
    operator=(F);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(Fixed& F)
{
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