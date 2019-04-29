#include "Shape.h"
#include "TwoDimensionalShape.h"

class circle: public TwoDimensionalShape{
public:
	circle();
	circle(double radius, double xCenter, double yCenter);
	virtual pair<double, double> getCenter();
	virtual double getLength();
	virtual double getRadius();
	virtual double getarea();
	virtual double getVolume();
	~circle();
	
};

