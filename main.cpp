#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//	GeometricObject shape;

	double radius, length;
	string ballColor, cubeColor;
	cin >> radius >> ballColor >> length >> cubeColor;


	Ball ball(radius, ballColor);
	cout << ball.toString() << endl
		<< "radius:" <<fixed<<setprecision(1)<< ball.getRadius()
		<< ", area:" << fixed << setprecision(1) << ball.getArea()
		<< ", volume:" << fixed << setprecision(1) << ball.getVolume()
		<< ", color:" << ball.getColor() << " " << endl;


	Cube cube(length, cubeColor);
	cout << cube.toString() << endl
		<< "length:" << fixed << setprecision(1) << cube.getLength()
		<< ", area:" << fixed << setprecision(1) << cube.getArea()
		<< ", volume:" << fixed << setprecision(1) << cube.getVolume()
		<< ", color:" << cube.getColor() << " " << endl;


	system("pause");
	return 0;
}