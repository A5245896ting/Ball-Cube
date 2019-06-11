#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject
{
public:
	Cube();
	Cube(double);
	Cube(double radius, const string& color);
	double getLength() const;
	void setLength(double);
	double getArea() const;
	double getVolume() const;
	virtual string toString() const;

private:
	double length;
};

#endif

