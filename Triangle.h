#pragma once
#include<iostream>

class Triangle
{

private:
	int base;
	int height;
	int length;

public:

	Triangle();
	Triangle(Triangle const& t);
	


	void setbase(int a);
	void setheight(int a);
	void setlength(int a);
	int getlen();
	int getheight();
	int getbase();

	void display();
	~Triangle();

};
