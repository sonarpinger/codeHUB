#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle: public Shape{
		float radius;

		void calcPerimeter();
		void calcArea();
public:
		Circle();
		Circle(float);
		Circle(const Circle&);

		float getRadius();

		void setRadius(float);
};

#endif