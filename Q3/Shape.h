#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <fstream>
using std::endl;
using std::pair;
using std::ostream;


class Shape;
ostream& operator<<(ostream& os, Shape& aShape);



class Shape{
public:
	enum ShapeType{
		square,
		circle,
		sphere,
		cube
	};
	Shape();
	~Shape();
	virtual pair<double, double> getCenter();
	virtual double getLength();
	virtual double getRadius();
	virtual double getArea(){};
	virtual double getVolume(){};
	Shape::ShapeType getEntity();	
protected:
	pair<double, double> center;
	double length;
	double radius;
	double area;
	double volume;
	Shape::ShapeType entity;
};


#endif