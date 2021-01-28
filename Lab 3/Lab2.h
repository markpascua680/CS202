#pragma once
#ifndef LAB2_HPP
#define LAB2_HPP

class Foo {
public:


	Foo();
	Foo(int x);
	Foo(const Foo& f);

	int getNum() {
		return _num;
	}

	~Foo();

private:
	int _num = 0;
};


#endif // !LAB2_HPP
