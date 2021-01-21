#pragma once
#ifndef LAB2_HPP
#define LAB2_HPP

class Foo {
public:
	int num = 0;

	Foo();
	Foo(int x);
	Foo(const Foo& f);

	int getNum() {
		return num;
	}

	~Foo();
};

#endif // !LAB2_HPP
