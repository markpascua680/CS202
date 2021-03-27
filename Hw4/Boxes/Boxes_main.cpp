#include "Boxes.h"

int main() {
	FilledBox f(6,9);
	HollowBox h(6,9);
	CheckeredBox c(6,9);
	// Filled box ----------------------
	cout << "Filled" << endl;
	cout << "Width: " << f.getWidth() << " Height: " << f.getHeight() << endl;
	cout << f << endl;

	// Hollow box ----------------------
	cout << "Hollow" << endl;
	cout << "Width: " << h.getWidth() << " Height: " << h.getHeight() << endl;
	cout << h << endl;
	// Checkered box ----------------------

	return 0;
}