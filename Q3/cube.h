#include "Shape.h"
#include "ThreeDimensionalShape.h"

class cube: public ThreeDimensionalShape{
public:
	cube();
	cube(double length);
	virtual pair<double, double> getCenter();
	virtual double getLength();	
	virtual double getArea();
	virtual double getVolume();
	~cube();
	
};
