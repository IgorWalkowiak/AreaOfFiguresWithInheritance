/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Figure.h
 * Author: igor
 *
 * Created on April 1, 2018, 10:43 PM
 */

#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>


class Figure
{
public:
   // Figure(void);
    virtual double area(void) const = 0;
    virtual std::ostream& print(std::ostream&) const = 0;
    friend std::ostream& operator<<(std::ostream&, Figure&);
};



 #endif /* FIGURE_H */
