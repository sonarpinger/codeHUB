#include "triangle.h"
#include <math.h>
void Triangle::calcPerimeter(){
    perimeter = side1 + side2 + side3;
}
void Triangle::calcArea(){
    float sVal = (side1 + side2 + side3) /2;
    area = sqrt(sVal *(sVal- side1) * (sVal-side2) * (sVal -side3));
}


Triangle::Triangle(){
    area = 0;
    perimeter = 0;
    side1 = 0;
    side2 = 0;
    side3 = 0;
}
Triangle:: Triangle(float base, float leg1, float leg2){
    side1 = base;
    side2 = leg1;
    side3 = leg2;
    calcPerimeter();
    calcArea();
}

Triangle::Triangle(const Triangle& originalTriangle){
    side1 = originalTriangle.side1;
    side2 = originalTriangle.side2;
    side3 = originalTriangle.side3;
    perimeter = originalTriangle.perimeter;
    area = originalTriangle.area;
}

float Triangle::getSide1(){
    return side1;
}
float Triangle::getSide2(){
    return side2;
}
float Triangle::getSide3(){
    return side3;
}

void Triangle::setSides(float base, float leg1, float leg2){
    side1 = base;
    side2 = leg1;
    side3 = leg2;
}
void Triangle::setSide1(float base){
    side1 = base;
}
void Triangle::setSide2(float leg1){
    side2 = leg1;
}
void Triangle::setSide3(float leg2){
    side3 = leg2;
}