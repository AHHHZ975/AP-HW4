#include "square.h"

square::square(){
}

square::square(double length, double xCenter, double yCenter){
	this->entity = ShapeType::square;
	this->length = length;
	this->center.first = xCenter;
	this->center.second = yCenter;
}


pair<double, double> square::getCenter(){
	return this->center;
}

double square::getLength(){
	return this->length;
}

double square::getArea(){
		return this->length * this->length;
}

square::~square(){
	
}
