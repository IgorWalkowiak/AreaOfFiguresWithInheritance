/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triangle.h
 * Author: igor
 *
 * Created on April 1, 2018, 10:49 PM
 */

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"

class Triangle: 
public Figure
{
    double a,h;
    
public:
    virtual double area(void)const;
    virtual std::ostream& print(std::ostream&)const;
  
};

#endif /* TRIANGLE_H */
