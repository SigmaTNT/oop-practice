#include "Triangle.h"

#include<iostream>

Triangle::Triangle()
{
	length = 0;
	height = 0;
	base = 0;
}

Triangle::Triangle(Triangle const& t)
{
	length = t.length;
	base = t.base;
	height = t.height;

}

void Triangle::setbase(int a)
{
	base = a;

}

void Triangle::setlength(int a)
{
	length= a;

}

void Triangle::setheight(int a)
{
	height = a;

}

int Triangle::getlen()
{
	return length;

}

int Triangle::getheight()
{
	return height;

}

int Triangle::getbase()
{
	return base;

}

void Triangle::display()
{
	getlen();

	getbase();
	getheight();

}
Triangle::~Triangle()
{

}


