//Author: Erin Keith
//Date: 8/31/20
//makefile example

#include <iostream>
using namespace std;

#include "perimeter.h"

int getShape();

int main(){
	int userChoice;
	double dim1, dim2, dim3;

	userChoice = getShape();

	switch(userChoice){
		case 1:
			cout << "side 1: ";
			cin >> dim1;
			cout << "side 2: ";
			cin >> dim2;
			cout << "side 3: ";
			cin >> dim3;
			cout << "The perimeter of your triangle: " << calcTrianglePerimeter(dim1, dim2, dim3) << endl;
			break;
		case 2:
			cout << "length: ";
			cin >> dim1;
			cout << "width: ";
			cin >> dim2;
			cout << "The perimeter of your rectangle: " << calcRectanglePerimeter(dim1, dim2) << endl;
			break;
		case 3:
			cout << "radius: ";
			cin >> dim1;
			cout << "The perimeter of your circle: " << calcCirclePerimeter(dim1) << endl;
			break;
	}
	return 0;
}

int getShape(){
	int shapeChoice;

	cout << "1. Triangle" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Circle" << endl;
	cout << "Pick a shape: ";
	cin >> shapeChoice;

	return shapeChoice;
}