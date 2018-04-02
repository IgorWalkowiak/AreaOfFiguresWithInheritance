/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Ractangle.cpp
 * Author: igor
 * 
 * Created on April 1, 2018, 10:48 PM
 */

#include "Rectangle.h"

double Ractangle::area(void) const
{
    return a*b;
}

std::ostream& Ractangle::print(std::ostream& out) const
{
    std::cout<<"I'm a Rectangle";
    return out;
}
