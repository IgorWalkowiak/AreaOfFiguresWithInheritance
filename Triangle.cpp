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


double Triangle::area() const
{
    return a*h*0.5;
}

std::ostream& Triangle::print(std::ostream& out) const
{
    std::cout<<"I'm a triangle";
    return out;
}