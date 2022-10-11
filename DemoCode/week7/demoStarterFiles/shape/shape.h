#ifndef SHAPE_H
#define SHAPE_H
using namespace std;
#include <iostream>
#include <string>

class Shape{
   protected:
      int sides;
      float area, perimeter;
   public:
      Shape();
      Shape(float, float);
      Shape(const Shape&);

      float getArea();
      float getPerimeter();

      void setArea(float);
      void setPerimeter(float);
};
   //declare properties/methods
   //including default and copy constructor, and getP getA
#endif