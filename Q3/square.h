#include "Shape.h"
#include "TwoDimensionalShape.h"

class square: public TwoDimensionalShape{
public:
	square();
	square(double length, double xCenter, double yCenter);
	virtual pair<double, double> getCenter();
	virtual double getLength();
	virtual double getRadius(){};
	virtual double getArea();
	virtual double getVolume(){};	
	~square();
	
};
