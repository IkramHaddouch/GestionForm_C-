#pragma once
class Dessin
{
	//Forme* T[10];// tableau statique de 10 case de type Forme*
	Forme** tab;// tableau statique de 10 case de type Forme*
	int indice;
public:
	Dessin(int);
	void ajouterForme(Forme *f);
	friend ostream& operator<<(ostream& flux, Dessin& d);
};

