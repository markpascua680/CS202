#ifndef BOXES_H
#define BOXES_H
#include <iostream>
#include <memory>

using std::cout;
using std::endl;

class Box
{
	friend std::ostream& operator<<(std::ostream& os, const Box& b);
public:
	Box();
	Box(const int& w, const int& h);
	virtual ~Box() = default;

	int getWidth() const;
	int getHeight() const;

	void setWidth(const int& w);
	void setHeight(const int& h);

	virtual void print(std::ostream& os) const = 0;
	virtual std::string type() const = 0;

private:
	int _height;
	int _width;
};

class FilledBox : public Box {
public:
	FilledBox();
	FilledBox(const int& w, const int& h);

	void print(std::ostream& os) const override;
	virtual std::string type() const override;
};

class HollowBox : public Box {
public:
	HollowBox();
	HollowBox(const int& w, const int& h);

	void print(std::ostream& os) const override;
	std::string type() const override;
};

class CheckeredBox : public Box {
public:
	CheckeredBox();
	CheckeredBox(const int& w, const int& h);

	void print(std::ostream& os) const override;
	std::string type() const override;
};

std::unique_ptr<Box> boxFactory(char c, int w, int h);

#endif // !BOXES_H
