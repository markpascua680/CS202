#include "Boxes.h"

std::ostream& operator<<(std::ostream& os, const Box& b) {
	b.print(os);
	return os;
}

std::unique_ptr<Box> boxFactory(char c, int w, int h) {
	std::unique_ptr<Box> b;
	switch (c) {
	case 'f':
		b = std::make_unique<FilledBox>(w, h);
		return b;
	case 'h':
		b = std::make_unique<HollowBox>(w, h);
		return b;
	case 'c':
		b = std::make_unique<CheckeredBox>(w, h);
		return b;
	default:
		throw std::runtime_error("Invalid box parameters entered");
	}
}

// Box Definitions -----------------------

Box::Box() {
	_width = 1;
	_height = 1;
}

Box::Box(const int& w, const int& h) {
	_width = w;
	_height = h;
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

void FilledBox::print(std::ostream& os) const {
	int w = getWidth();
	int h = getHeight();

	for (int row = 0; row < h; row++) {
		os << std::string(w, 'x');
		os << endl;
	}
}

std::string FilledBox::type() const {
	return "Filled";
}

// Hollow Box Definitions -----------------------
HollowBox::HollowBox() : Box() {
}

HollowBox::HollowBox(const int& w, const int& h) : Box(w, h) {
}

void HollowBox::print(std::ostream& os) const {
	for (int h = 0; h < getHeight(); h++) {
		if (h == 0 || h == getHeight() - 1) { // Prints Top and Bottom Sides
			os << std::string(getWidth(), 'x');
		}
		else
			os << 'x' << std::string(getWidth() - 2, ' ') << 'x';
		os << endl;
	}
}

std::string HollowBox::type() const {
	return "Hollow";
}

// Checkered Box Definitions -----------------------
CheckeredBox::CheckeredBox() : Box() {
}

CheckeredBox::CheckeredBox(const int& w, const int& h) : Box(w, h) {
}

void CheckeredBox::print(std::ostream& os) const {
	for (int h = 0; h < getHeight(); h++) {

		for (int w = 0; w < getWidth(); w++) {
			if (h % 2 == 0 && w % 2 == 0) { // Every odd row and column prints a character where the row + column intersect
				os << 'x';
				continue;
			}
			if (h % 2 == 1 && w % 2 == 1) { // Every even row and column prints a character where the row + column intersect
				os << 'x';
				continue;
			}
			os << ' ';
		}

		os << endl;
	}
}

std::string CheckeredBox::type() const {
	return "Checkered";
}