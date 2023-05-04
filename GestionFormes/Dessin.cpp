#include "Header.h"

Dessin::Dessin(int x)
{
	tab= new Forme*[x]; ///////////
	indice = 0;
}

void Dessin::ajouterForme(Forme* f)
{
	tab[indice] = f;
	indice++;
}

ostream& operator<<(ostream& flux, Dessin& d)
{
	flux << "Les Formes dans ce dessin sont :" << endl;
	for (int i = 0; i < d.indice; i++)
		flux << "\t- " << d.tab[i]->identite() << " - surface = "<<d.tab[i]->surface()<<endl;
	return flux;
}
