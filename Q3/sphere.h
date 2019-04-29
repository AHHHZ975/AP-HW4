#include "Shape.h"
#include "ThreeDimensionalShape.h"

class sphere: public ThreeDimensionalShape{
public:
	sphere();
	sphere(double radius, double xCenter, double yCenter);
	virtual pair<double, double> getCenter();	
	virtual double getRadius();
	virtual double getArea();
	virtual double getVolume();
	~sphere();
};
