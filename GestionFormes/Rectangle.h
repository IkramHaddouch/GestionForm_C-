#pragma once
class Rectangle: public Forme
{
	float longue, large;
public: 
	Rectangle();
	Rectangle(float, float, string);
	Rectangle(Rectangle const&);
	~Rectangle();
	Rectangle& operator=(Rectangle const&);
	 void setlongue(float);
	 void setlarge(float);
	 float getlongue(float);
	 float getlarge(float);
	 string identite();
	 float surface();
	 friend ostream& operator<<(ostream&, Rectangle&);
};

