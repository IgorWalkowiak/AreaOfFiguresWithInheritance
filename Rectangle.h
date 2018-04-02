/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Ractangle.h
 * Author: igor
 *
 * Created on April 1, 2018, 10:48 PM
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "Figure.h"

class Rectangle:
public Figure
{
    double a,b;

public:
    Rectangle(double,double);
    virtual double area(void)const;
    virtual std::ostream& print(std::ostream&)const;

};

#endif /* RECTANGLE_H */
