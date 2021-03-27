#ifndef BOXES_H
#define BOXES_H
#include <iostream>

using std::cout;
using std::endl;

class Box
{
	friend std::ostream& operator<<(std::ostream& os, Box& b);

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

class FilledBox : public Box {
public:
	FilledBox();
	FilledBox(const int& w, const int& h);

	void print(std::ostream& os) override;
	std::string type() override;
};

class HollowBox : public Box {
public:
	void print(std::ostream& os) override;
	std::string type() override;
};

class CheckeredBox : public Box {
public:
	void print(std::ostream& os) override;
	std::string type() override;
};

#endif // !BOXES_H
