#include "perimeter.h"

double calcTrianglePerimeter(double side1, double side2, double side3){
	return side1 + side2 + side3;
}

double calcRectanglePerimeter(double length, double width){
	return 2 * (length + width);
}

double calcCirclePerimeter(double radius){
	return 2 * 3.1415 * radius;
}