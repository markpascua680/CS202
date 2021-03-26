#include "Boxes.h"

int main() {
	FilledBox b;

	cout << "Width: " << b.getWidth() << " Height: " << b.getHeight() << endl;

	b.setWidth(6);
	b.setHeight(9);

	cout << "Width: " << b.getWidth() << " Height: " << b.getHeight() << endl;

	return 0;
}