#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include "Shape.h"

class TwoDimensionalShape: public Shape{
public:
	TwoDimensionalShape();
	virtual pair<double, double> getCenter(){};
	virtual double getLength();
	virtual double getRadius();
	virtual double getarea();
	virtual double getVolume();
	~TwoDimensionalShape();
	
};

#endif