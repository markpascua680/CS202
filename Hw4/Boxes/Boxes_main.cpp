#include "Boxes.h"

int main() {
	auto f = boxFactory('f', 6, 9);
	auto h = boxFactory('h', 6, 9);
	auto c = boxFactory('c', 10, 10);

	// Filled box ----------------------
	cout << "Filled" << endl;
	cout << "Width: " << f->getWidth() << " Height: " << f->getHeight() << endl;
	cout << *f << endl;

	// Hollow box ----------------------
	cout << "Hollow" << endl;
	cout << "Width: " << h->getWidth() << " Height: " << h->getHeight() << endl;
	cout << *h << endl;

	// Checkered box ----------------------
	cout << "Checkered" << endl;
	cout << "Width: " << c->getWidth() << " Height: " << c->getHeight() << endl;
	cout << *c << endl;

	return 0;
}