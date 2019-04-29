#include "Shape.h"
#include "TwoDimensionalShape.h"

class circle: public TwoDimensionalShape{
public:
	circle();
	circle(double radius, double xCenter, double yCenter);
	virtual pair<double, double> getCenter();	
	virtual double getRadius();
	virtual double getArea();	
	~circle();
	
};

