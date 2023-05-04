#include "Header.h"

Forme::Forme()
{
	couleur = " none";
}

Forme::Forme(string s)
{
	couleur = s;
}

Forme::Forme(Forme const& f)
{
	couleur = f.couleur;
}

Forme::~Forme()
{
}

 Forme& Forme::operator=(Forme const& f)
{
	 couleur = f.couleur;
	 return *this;
}

 string Forme::identite()
 {
	 return "je suis une forme ";
 }

 void Forme::setCouleur(string c )
 {
	 couleur = c;
 }

 string Forme::getCouleur()
 {
	 return couleur;
 }

 ostream& operator<<(ostream& f, Forme&  g)
 {
	
	 f << g.identite() <<" de couleur "<<g.couleur;
	 return f;
 }
