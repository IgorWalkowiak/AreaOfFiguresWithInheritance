/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Figure.cpp
 * Author: igor
 * 
 * Created on April 1, 2018, 10:43 PM
 */



#include "Figure.h"
#include <iostream>
std::ostream& operator<<(std::ostream& out, Figure& f)
   {
    f.print(out);
    return out;
   }