// GestionFormes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Header.h"

void testerLesClasses()
{
    //Forme f, f1("Rouge");
    Cercle c,c1(3,"Vert");
    Rectangle r, r1(2,3,"Noir");
   
    //cout << "Forme f : " << f << endl;
    //cout << "Forme f1 : " << f1 << endl;
    cout << "Cercle c : " << c << endl;
    cout << "Cercle c1 " << c1 << endl;
    cout << "Rectangle r : " << r << endl;
    cout << "Rectangle r1 : " << r1 << endl;
}
void testerPolymorphisme()
{
    Forme* f;// , f1("Rouge");
    Cercle c, c1(3, "Vert");
    Rectangle r, r1(2, 3, "Noir");

    f = &c;
    cout << f->identite() << endl;
    f = &r;
    cout << f->identite() << endl;
   // cout << c.identite() << endl;
   // cout << r.identite() << endl;
}
void testerDessin()
{
    Dessin d(50);
    Cercle c, c1(3, "Vert");
    Rectangle r, r1(2, 3, "Noir");

    d.ajouterForme(&c);
    d.ajouterForme(&r1);
    d.ajouterForme(&c1);
    d.ajouterForme(&r);
    cout << d;
}
int main()
{
    std::cout << "Hello World!\n";
   // testerLesClasses();
    //testerPolymorphisme();
    testerDessin();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
