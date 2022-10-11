#include "trapezoid.h"

void Trapezoid::calcPerimeter(){
    perimeter = base1 + base2 + side1 + side2;
}
void Trapezoid::calcArea(){
    area = ((base1 + base2) * height) / 2;
}

Trapezoid::Trapezoid(){
    base1 = 0;
    base2 = 0;
    height = 0;
    side1 = 0;
    side2 = 0;
}
Trapezoid::Trapezoid(float b1, float b2, float ht, float s1, float s2){
    base1 = b1;
    base2 = b2;
    height = ht;
    side1 = s1;
    side2 = s2;
    calcPerimeter();
    calcArea();
}
Trapezoid::Trapezoid(const Trapezoid& originalTrapezoid){
    base1 = originalTrapezoid.base1;
    base2 = originalTrapezoid.base2;
    height = originalTrapezoid.height;
    side1 = originalTrapezoid.side1;
    side2 = originalTrapezoid.side2;
    perimeter = originalTrapezoid.perimeter;
    area = originalTrapezoid.area;
}

float Trapezoid::getBase1(){
    return base1;
}
float Trapezoid::getBase2(){
    return base2;
}
float Trapezoid::getHeight(){
    return height;
}
float Trapezoid::getSide1(){
    return side1;
}
float Trapezoid::getSide2(){
    return side2;
}

void Trapezoid::setSides(float b1, float b2, float s1, float s2){
    base1 = b1;
    base2 = b2;
    side1 = s1;
    side2 = s2;
}
void Trapezoid::setSide1(float s1){
    side1 = s1;
}
void Trapezoid::setSide2(float s2){
    side2 = s2;
}
void Trapezoid::setBase1(float b1){
    base1 = b1;
}
void Trapezoid::setBase2(float b2){ 
    base2 = b2;
}
void Trapezoid::setHeight(float ht){
    height = ht;
}