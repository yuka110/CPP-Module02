/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/23 14:25:08 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/26 15:26:01 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _x(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int a)
{
    // std::cout << "Int constructor called" << std::endl;
    _x = a * (1 << _y);
}


Fixed::Fixed(const float f)
{
    // std::cout << "Float constructor called" << std::endl;
    _x = roundf(f * (1 << _y));
}

Fixed::Fixed(const Fixed& F)
{
    // std::cout << "Copy constructor called" << std::endl;
    operator=(F);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

void Fixed::operator=(const Fixed& F)
{
    if (this == &F)
        return ;
    // std::cout << "Copy assignment operator called" << std::endl;
    _x = F.getRawBits();
}

int   Fixed::getRawBits(void) const
{
    // std::cout << "getRawbits member function called" << std::endl;
    return(_x);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawbits member function called" << std::endl;
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

bool Fixed::operator>(Fixed& rhs)
{
    if (_x > rhs.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<(Fixed& rhs)
{
    if (_x > rhs.getRawBits())
        return true;
    return false;
}

bool Fixed::operator>=(Fixed& rhs)
{
    if (_x >= rhs.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<=(Fixed& rhs)
{
    if (_x <= rhs.getRawBits())
        return true;
    return false;
}

bool Fixed::operator==(Fixed& rhs)
{
    if (_x == rhs.getRawBits())
        return true;
    return false;
}

bool Fixed::operator!=(Fixed& rhs)
{
    if (_x != rhs.getRawBits())
        return true;
    return false;
}

Fixed Fixed::operator+(Fixed &rhs)
{
    Fixed   cp;
    cp.setRawBits(_x + rhs.getRawBits());
    return (cp);
}


Fixed Fixed::operator-(Fixed &rhs)
{
    Fixed   cp;
    cp.setRawBits(_x - rhs.getRawBits());
    return (cp);
}


Fixed Fixed::operator*(const Fixed &rhs)
{
    Fixed   cp;
    cp.setRawBits((_x * rhs.getRawBits()) >> _y);
    return (cp);
}


Fixed Fixed::operator/(const Fixed &rhs)
{
    Fixed   cp;
    cp.setRawBits((_x / rhs.getRawBits()) << _y);
    return (cp);
}

Fixed& Fixed::operator++()
{
    this->setRawBits(_x + 1);
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed   cp = *this;
    operator++();
    return(cp);
}

Fixed Fixed::operator--()
{
    Fixed   cp = *this;
    setRawBits(_x - 1);
    return(cp);
}

Fixed Fixed::operator--(int)
{
    this->setRawBits(_x - 1);
    return(*this);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return (a._x > b._x ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a._x > b._x ? a : b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return (a._x < b._x ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a._x < b._x ? a : b);
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
    out << obj.toFloat();
    return (out);
}