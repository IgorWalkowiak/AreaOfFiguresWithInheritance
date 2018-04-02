/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Circle.h
 * Author: igor
 *
 * Created on April 1, 2018, 10:44 PM
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "Figure.h"


class Circle:
public Figure
{
    public:
    Circle(int);

    double r;
    virtual double area(void)const;
    virtual std::ostream& print(std::ostream&)const;

};

#endif /* CIRCLE_H */
