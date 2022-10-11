#include "shape.h"

//default constructor
Shape::Shape(){
    perimeter = 0;
    area = 0;
}

Shape::Shape(const Shape& originalShape){
    perimeter = originalShape.perimeter;
    area = originalShape.area;
}

float Shape::getPerimeter(){
    return perimeter;
}

float Shape::getArea(){
    return area;
}