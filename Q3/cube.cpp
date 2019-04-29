#include "cube.h"

cube::cube(){

}

cube::cube(double length){
	this->entity = ShapeType::cube;
	this->length = length;
}
cube::~cube(){
	
}

pair<double, double> cube::getCenter(){
	return this->center;
};

double cube::getLength(){
	return this->length;
};

double cube::getArea(){
	return 6*this->length*this->length;
};
double cube::getVolume(){
	return this->length*this->length*this->length;
};