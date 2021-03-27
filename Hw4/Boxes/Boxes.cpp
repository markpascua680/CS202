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

// Filled Box Definitions -----------------------

FilledBox::FilledBox() : Box() {
	cout << "Constructed filled box with width " << getWidth() << " and height " << getHeight() << endl;
}

FilledBox::FilledBox(const int& w, const int& h) : Box(w, h) {
	cout << "Constructed filled box with width " << getWidth() << " and height " << getHeight() << endl;
}

void FilledBox::print(std::ostream& os) {
	int w = getWidth();
	int h = getHeight();

	for (int row = 0; row < h; row++) {
		os << std::string(w, '#');
		os << endl;
	}
}

std::string FilledBox::type() {
	return "Filled";
}

// Hollow Box Definitions -----------------------

void HollowBox::print(std::ostream& os) {

}

std::string HollowBox::type() {
	return "Hollow";
}

// Checkered Box Definitions -----------------------

void CheckeredBox::print(std::ostream& os) {

}

std::string CheckeredBox::type() {
	return "Checkered";
}

std::ostream& operator<<(std::ostream& os, Box& b) {
	b.print(os);
	return os;
}