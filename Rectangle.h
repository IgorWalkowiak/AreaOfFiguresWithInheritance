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

#ifndef RACTANGLE_H
#define RACTANGLE_H


#include "Figure.h"

class Ractangle: 
public Figure
{
    double a,b;
    
public:
    virtual double area(void)const;
    virtual std::ostream& print(std::ostream&)const;
  
};

#endif /* RACTANGLE_H */
