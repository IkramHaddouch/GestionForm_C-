#include "Header.h"

Rectangle::Rectangle()
{
	large = longue = 0;
}

Rectangle::Rectangle(float l, float L, string s) :Forme(s)
{
	longue = L;
		large = l;
}

Rectangle::Rectangle(Rectangle const& R):Forme(R)
{
	large = R.large;
	longue = R.longue;
}

Rectangle::~Rectangle()
{
}

Rectangle& Rectangle::operator=(Rectangle const& R)
{
	Forme::operator=(R);

	large = R.large;
	longue = R.longue;
	return *this;
}

void Rectangle::setlongue(float l)
{
	longue = l;
}

void Rectangle::setlarge(float l)
{
	large = l;
}

float Rectangle::getlongue(float)
{
	return longue;
}

float Rectangle::getlarge(float)
{
	return large;
}

string Rectangle::identite()
{
	return "je suis un Rectangle";
}

float Rectangle::surface()
{
	return large*longue;
}

ostream& operator<<(ostream& f, Rectangle& r)
{
	Forme g = r;
	f << g << "large = " << r.large << " et longue = " << r.longue <<"]";
	return f; 
}
