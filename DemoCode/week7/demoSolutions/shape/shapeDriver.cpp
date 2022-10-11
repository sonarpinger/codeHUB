
#include <iostream>

#include "triangle.h"
#include "circle.h"
#include "trapezoid.h"

int main(){
    cout << endl << "Triangle side lengths are 3, 4, 5: " << endl;
    Triangle demoTriangle(3, 4, 5);
    cout << "Area is " << demoTriangle.getArea() << endl;
    cout << "Perimeter is " << demoTriangle.getPerimeter() << endl <<endl;

    cout << "Circle radius is 3: " << endl;
    Circle demoCircle(3);
    cout << "Area is " << demoCircle.getArea() << endl;
    cout << "Perimeter is " << demoCircle.getPerimeter() << endl <<endl;
    
    cout << "Trapezoid base 1 is 12, base2 is 6, side 1 is 5, side 2 is 5, height is 4: " << endl;
    Trapezoid demoTrapezoid(12, 6, 4, 5, 5);
    cout << "Area is " << demoTrapezoid.getArea() << endl;
    cout << "Perimeter is " << demoTrapezoid.getPerimeter() << endl<< endl;

    Shape shapeArray[50];

    shapeArray[0] = demoTriangle;
    shapeArray[1] = demoCircle;
    shapeArray[2] = demoTrapezoid;

    for(int i = 0; i < 3; i++){
        shapeArray[i].getArea();
    }
}