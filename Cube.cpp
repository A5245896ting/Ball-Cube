#include "Cube.h"

Cube::Cube()
{
	length = 1;
}

Cube::Cube(double length)
{
	setLength(length);
}

Cube::Cube(double radius, const string& color)
{
	this->length = radius;
	setColor(color);
}

double Cube::getLength() const
{
	return length;
}

void Cube::setLength(double length)
{
	this->length = (length >= 0) ? length : 0;
}

double Cube::getArea() const
{
	return length * length * 6;
}

double Cube::getVolume() const
{
	return length * length *length;
}

string Cube::toString() const
{
	return "Cube";
}