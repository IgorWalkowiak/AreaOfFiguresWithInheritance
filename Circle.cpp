/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Circle.cpp
 * Author: igor
 *
 * Created on April 1, 2018, 10:44 PM
 */

#include "Circle.h"

Circle::Circle(int in):r(in)
{
 if(r<=0)
    {
        std::cout<<"Are you trying to cheat me again?";
        r=1;
    }
}
 double Circle::area(void) const
{
    return 3.14*r*r;
}

 std::ostream& Circle::print(std::ostream& out) const
{
    out<<"I'm a circle";
    return out;
}
