/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: igor
 *
 * Created on April 1, 2018, 10:41 PM
 */

#include <iostream>
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;
int main()
{
Figure** figures= new Figure*[3];
figures[0] = new Circle(5);
figures[1] = new Triangle(3,3,5);
figures[2] = new Rectangle(2,3);

for(int i=0; i<3; i++)
{
    cout << *figures[i] << endl;
}
cout << "Area of figures:" << endl;

for(int i=0; i<3; i++)
{
    cout << figures[i]->area() << endl;
}
}

