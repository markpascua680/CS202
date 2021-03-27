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
}

FilledBox::FilledBox(const int& w, const int& h) : Box(w, h) {
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
HollowBox::HollowBox() : Box() {
}

HollowBox::HollowBox(const int& w, const int& h) : Box(w, h) {
}

void HollowBox::print(std::ostream& os) {
	for (int h = 0; h < getHeight(); h++) {
		if (h == 0 || h == getHeight() - 1) { // Prints Top and Bottom Sides
			os << std::string(getWidth(), '#');
		}
		else
			os << '#' << std::string(getWidth() - 2, ' ') << '#';
		os << endl;
	}
}

std::string HollowBox::type() {
	return "Hollow";
}

// Checkered Box Definitions -----------------------
CheckeredBox::CheckeredBox() : Box() {
}

CheckeredBox::CheckeredBox(const int& w, const int& h) : Box(w, h) {
}

void CheckeredBox::print(std::ostream& os) {

}

std::string CheckeredBox::type() {
	return "Checkered";
}

std::ostream& operator<<(std::ostream& os, Box& b) {
	b.print(os);
	return os;
}