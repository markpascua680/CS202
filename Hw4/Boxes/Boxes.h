#ifndef BOXES_H
#define BOXES_H
#include <iostream>

using std::cout;
using std::endl;

class Box
{
public:
	Box(int w, int h);
	~Box();

	int getWidth() const;
	int getHeight() const;

	void setWidth(int w);
	void setHeight(int h);


private:
	int _height;
	int _width;
};

std::ostream operator<<(std::ostream& os, const Box& b);


#endif // !BOXES_H
