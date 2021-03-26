#ifndef BOXES_H
#define BOXES_H
#include <iostream>

using std::cout;
using std::endl;

class Box
{
public:
	Box();
	Box(const int& w, const int& h);
	~Box();

	int getWidth() const;
	int getHeight() const;

	void setWidth(const int& w);
	void setHeight(const int& h);

	virtual void print(std::ostream& os) = 0;
	virtual std::string type() = 0;

private:
	int _height;
	int _width;
};

std::ostream operator<<(std::ostream& os, const Box& b);

class FilledBox : public Box {
public:
	void print(std::ostream& os);
	std::string type();
};

class HollowBox : public Box {
public:
	void print(std::ostream& os);
	std::string type();
};

class CheckeredBox : public Box {
public:
	void print(std::ostream& os);
	std::string type();
};

#endif // !BOXES_H
