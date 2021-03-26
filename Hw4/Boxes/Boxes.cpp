#include "Boxes.h"


Box::Box(int w, int h) {
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

void Box::setWidth(int w) {
	_width = w;
}

void Box::setHeight(int h) {
	_height = h;
}



