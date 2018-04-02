/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Rectangle.cpp
 * Author: igor
 *
 * Created on April 1, 2018, 10:48 PM
 */

#include "Rectangle.h"

Rectangle::Rectangle(double inX, double inY ):a(inX),b(inY)
{
    if(a<=0)
    {
        std::cout<<"Are you trying to cheat me again?";
        a=1;
    }

    if(b<=0)
    {
        std::cout<<"Are you trying to cheat me again?";
        b=1;
    }

}

double Rectangle::area(void) const
{
    return a*b;
}

std::ostream& Rectangle::print(std::ostream& out) const
{
    std::cout<<"I'm a rectangle";
    return out;
}
