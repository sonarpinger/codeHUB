#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "shape.h"

class Trapezoid: public Shape{
    float base1, base2, height, side1, side2;
    void calcPerimeter();
    void calcArea();

    public:
        Trapezoid();
        Trapezoid(float, float, float, float, float);
        Trapezoid(const Trapezoid&);

        float getSide1();
        float getSide2();
        float getBase1();
        float getBase2();
        float getHeight();

        void setSides(float, float, float, float);
        void setSide1(float);
        void setSide2(float);
        void setBase1(float);
        void setBase2(float);
        void setHeight(float);

};

#endif