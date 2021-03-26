#include "Boxes.h"

Box::Box() {
	_width = 1;
	_height = 1;
}

Box::Box(const int& w, const int& h) {
	_width = w;
	_height = h;
}

Box::~Box() {

}

int Box::getWidth() const {
	return _width;
}

int Box::getHeight() const {
	return _height;
}

void Box::setWidth(const int& w) {
	_width = w;
}

void Box::setHeight(const int& h) {
	_height = h;
}

void FilledBox::print(std::ostream& os) {

}

std::string FilledBox::type() {
	return "Filled";
}

void HollowBox::print(std::ostream& os) {

}

std::string HollowBox::type() {
	return "Hollow";
}

void CheckeredBox::print(std::ostream& os) {

}

std::string CheckeredBox::type() {
	return "Checkered";
}


