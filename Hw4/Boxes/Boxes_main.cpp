#include "Boxes.h"

int main() {
	FilledBox f;
	HollowBox h;
	CheckeredBox c;
	cout << "Filled" << endl;
	cout << "Width: " << f.getWidth() << " Height: " << f.getHeight() << endl;

	f.setWidth(6);
	f.setHeight(9);

	cout << f;



	return 0;
}