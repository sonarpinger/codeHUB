#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape{
    protected:
        float area, perimeter;
    public:
        Shape();
        Shape(const Shape&);

        float  getPerimeter();
        float  getArea();
        virtual void calcPerimeter();
        void virtual calcArea();

};
#endif