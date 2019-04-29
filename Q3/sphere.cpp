#include "sphere.h"

sphere::sphere(){

}

sphere::sphere(double radius, double xCenter, double yCenter){
	this->entity = ShapeType::sphere;
	this->radius = radius;
	this->center.first = xCenter;
	this->center.second = yCenter;
}

sphere::~sphere(){
	
}


pair<double, double> sphere::getCenter(){
	return this->center;
};

double sphere::getRadius(){
	return this->radius;
};
double sphere::getArea(){
	return 4*3.141592*this->radius*this->radius; 
};
double sphere::getVolume(){
	return 4*3.141592*this->radius*this->radius*this->radius/3;
};