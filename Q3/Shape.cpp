#include "Shape.h"

Shape::Shape(){

}

Shape::~Shape(){
	
}	

pair<double, double> Shape::getCenter(){
	return std::make_pair(this->center.first, this->center.second);
}

double Shape::getRadius(){
	return this->radius;
}

double Shape::getLength(){
	return this->length;
}

ShapeType Shape::getEntity(){
	return this->entity;
}

ostream& operator<<(ostream& os, Shape& aShape){
	if(aShape.getEntity() == ShapeType::square){
		os << "Square side length = " << aShape.getLength() << endl;
		os << "center->(" << aShape.getCenter().first << ", " << aShape.getCenter().second << ")" << endl;
		os << "area of " << aShape.getArea() << endl;
	}
	else if(aShape.getEntity() == ShapeType::circle){
		os << "Circle radius = " << aShape.getRadius() << endl;
		os << "center->(" << aShape.getCenter().first << ", " << aShape.getCenter().second << ")" << endl;
		os << "area of " << aShape.getArea() << endl;
	}
	else if(aShape.getEntity() == ShapeType::sphere){
		os << "Sphere radius = " << aShape.getRadius() << endl;
		os << "center->(" << aShape.getCenter().first << ", " << aShape.getCenter().second << ", 0)" << endl;
		os << "area of " << aShape.getArea() << " & ";
		os << "volume of " << aShape.getVolume() << endl;
	}
	else if(aShape.getEntity() == ShapeType::cube){
		os << "Cube side length = " << aShape.getRadius() << endl;
		os << "center->(" << aShape.getCenter().first << ", " << aShape.getCenter().second << ", 0)" << endl;
		os << "area of " << aShape.getArea() << " & ";
		os << "volume of " << aShape.getVolume() << endl;
	}
	return os;
}
