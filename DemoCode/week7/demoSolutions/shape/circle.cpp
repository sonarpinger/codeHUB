#include "circle.h"

#define PI 3.1415

Circle::Circle(){
    radius = 0;
}
Circle:: Circle(float newRadius){
    setRadius(newRadius);
}
Circle:: Circle(const Circle& rhs){
    radius = rhs.radius;
    perimeter = rhs.perimeter;
    area = rhs.area;
}

float Circle::getRadius(){ 
		return radius;
}

void Circle::setRadius(float newRadius){
    radius = newRadius;
    calcPerimeter();
    calcArea();
}

void Circle::calcPerimeter(){ 
    perimeter = 2 * PI * radius;
}
void Circle::calcArea(){
    area = PI * radius * radius;
}
