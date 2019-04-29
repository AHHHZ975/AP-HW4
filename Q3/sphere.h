#include "Shape.h"
#include "ThreeDimensionalShape.h"

class sphere: public ThreeDimensionalShape{
public:
	sphere();
	sphere(double radius, double xCenter, double yCenter);
	virtual pair<double, double> getCenter();
	virtual double getLength();
	virtual double getRadius();
	virtual double getarea();
	virtual double getVolume();
	~sphere();
};
