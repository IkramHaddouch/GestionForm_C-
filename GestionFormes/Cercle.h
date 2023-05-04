#pragma once
class Cercle : public Forme
{
	float rayon;
public: 
	Cercle();
	Cercle(float,string);
	Cercle( Cercle const &);
	~Cercle();
	Cercle& operator=(Cercle const&);
	float getRayon();
	void setRayon( float );
	string identite();
	float surface();
	friend  ostream& operator<<(ostream& f, Cercle& C);
};

