#include "circle.h"

circle::circle(){

}

circle::circle(double radius, double xCenter, double yCenter){
	this->entity = ShapeType::circle;
	this->radius = radius;
	this->center.first = xCenter;
	this->center.second = yCenter;
}

circle::~circle(){
	
}

pair<double, double> circle::getCenter(){
	return this->center;
};

double circle::getRadius(){
	return this->radius;
};
double circle::getArea(){
	return 3.141592 * this->radius * this->radius;
};