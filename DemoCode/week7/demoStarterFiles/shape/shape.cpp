#include "shape.h"

//constructor
Shape::Shape(){
    area = -1;
    perimeter = -1;
}
Shape::Shape(float newArea, float newPerimeter){
    area = newArea;
    perimeter = newPerimeter;
}
Shape::Shape(const Shape& old){
    area = old.area;
    perimeter = old.perimeter;
}

//setter and getters
float Shape::getArea(){
    return area;
}
float Shape::getPerimeter(){
    return perimeter;
}

void Shape::setArea(float newArea){
    area = newArea;
}
void Shape::setPerimeter(float newPerimeter){
    perimeter = newPerimeter;
}
