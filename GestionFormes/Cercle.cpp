#include "Header.h"
#define PI 3.14
Cercle::Cercle():Forme()
{
	rayon = 0;
}

Cercle::Cercle(float r,string s):Forme(s)
{
	rayon = r;
}

Cercle::Cercle(Cercle const& C):Forme(C)
{
	rayon = C.rayon;
}

Cercle::~Cercle()
{
}

Cercle& Cercle::operator=(Cercle const& C)
{
	this->Forme::operator=(C);
	rayon = C.rayon; 
	return *this;
}

float Cercle::getRayon()
{
	return rayon;
}

void Cercle::setRayon(float r)
{
	rayon = r;
}

string Cercle::identite()
{
	return "je suis un cercle";
}

float Cercle::surface()
{
	return (float)(rayon*rayon*PI);
}

ostream& operator<<(ostream& f, Cercle& C)
{
	//Forme g(C);
	//f << g << " et mon rayon est " << C.rayon;
//	
		return f; 
}
