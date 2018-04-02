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


 double Circle::area(void) const
{
    return 3.14*r;
}

 std::ostream& Circle::print(std::ostream& out) const
{
    out<<"I'm a Circle";
    return out;
}
 