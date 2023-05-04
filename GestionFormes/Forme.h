#pragma once
class Forme
{
	string couleur;

public:
	Forme();
	Forme(string);
	Forme(Forme const&);
	~Forme();
	Forme& operator=(Forme const&);
	virtual float surface() { return 0; };
	virtual string identite();
	void setCouleur(string);
	string getCouleur();
	friend ostream& operator<<(ostream&, Forme&);
};

