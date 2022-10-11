//includes with math.h
#include <math.h>
#include "triangle.h"

Triangle::Triangle(){
    side1 = 0;
    side2 = 0;
    side3 = 0;
}
Triangle::Triangle(float newSide1, float newSide2, float newSide3){
    side1 = newSide1;
    side2 = newSide2;
    side3 = newSide3;
    calcularePerimeter();
    calculateArea();
}
Triangle::Triangle(const Triangle & old){
    side1 = old.side1;
    side2 = old.side2;
    side3 = old.side3;
    area = old.area;
    perimeter = old.area;
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

void Triangle::setSide1(float newSide1){
    side1 = newSide1;
}
void Triangle::setSide2(float newSide2){
    side2 = newSide2;
}
void Triangle::setSide3(float newSide3){
    side3 = newSide3;
}

void Triangle::calculateArea(){
    float semiP = (side1 + side2 + side3) / 2;
    float calcArea =  sqrt(semiP*((semiP - side1)*(semiP-side2)*(semiP-side3)));
    area = calcArea;
}
void Triangle::calcularePerimeter(){
    perimeter = side1 + side2 + side3;
}

