#ifndef THREEODIMENSIONALSHAPE_H
#define THREEODIMENSIONALSHAPE_H

#include "Shape.h"

class ThreeDimensionalShape: public Shape{
public:
	ThreeDimensionalShape();
	virtual pair<double, double> getCenter(){};
	virtual double getLength();
	virtual double getRadius();
	virtual double getarea();
	virtual double getVolume();
	~ThreeDimensionalShape();
	
};


#endif