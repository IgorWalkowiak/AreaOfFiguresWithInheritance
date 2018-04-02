/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Triangle.cpp
 * Author: igor
 *
 * Created on April 1, 2018, 10:49 PM
 */

#include "Triangle.h"
#include <iostream>
#include <math.h>

Triangle::Triangle(double inX,double inY, double inZ):a(inX),b(inY),c(inZ)
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
     if(c<=0)
    {
        std::cout<<"Are you trying to cheat me again?";
        c=1;
    }

    if(a+b<=c || a+c<=b || b+c<=a)
    {
        std::cout<<"Are you trying to cheat me again?";
        a=1;
        b=1;
        c=1;
    }


}

double Triangle::area() const
{
    double p=0.5*(a+b+c);
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

std::ostream& Triangle::print(std::ostream& out) const
{
    std::cout<<"I'm a triangle";
    return out;
}
