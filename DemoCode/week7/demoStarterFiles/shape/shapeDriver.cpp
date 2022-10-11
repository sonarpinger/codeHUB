#include "triangle.h"
int main(){
    Shape shapeArray[5];
    //set triangle sides to 3, 4, 5 calculate values
    Triangle newTriangle(3, 4, 5);
    shapeArray[0] = newTriangle;
    //set circle radius to 3, calculate values
    
    //set trapezoid b1=12, b2 = 6, s1=5, s2=5, h=4, calculate values


    //create an array of Shapes, insert each shape, output each shape's area
    cout << "this is a triangle, its area is: " << newTriangle.getArea() << endl;

}