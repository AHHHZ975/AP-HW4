#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <fstream>
using std::endl;
using std::pair;
using std::ostream;

class Shape;
ostream& operator<<(ostream& os, Shape& aShape);

enum ShapeType{
		square = 0,
		circle = 1,
		sphere = 2,
		cube = 3
};

class Shape{
public:
	Shape();
	~Shape();
	virtual pair<double, double> getCenter();
	virtual double getLength();
	virtual double getRadius();
	virtual double getArea(){};
	virtual double getVolume(){};
	ShapeType getEntity();	
protected:
	pair<double, double> center;
	double length;
	double radius;
	double area;
	double volume;
	ShapeType entity;
	
};


#endif