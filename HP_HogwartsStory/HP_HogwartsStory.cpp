// HP_HogwartsStory.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Personnage.h"
#include "Professeur.h"
#include "Etudiant.h"

using namespace std;

int main()
{
	Etudiant harry("Harry", "Potter", "Humain", "Gryffondor");
	Professeur snape("Severus", "Snape", "Humain", "potion");

	harry.LearnPotion("Polynectar");
	harry.LearnSpell("Lumos");

	cout << "Hello " + harry.GetName() + ".\n"; 
	cout << "You are " + harry.GetType() + ".\n";
	cout << "Your professor is " + snape.GetName() + ".\n";
	cout << snape.Teach();
	cout << harry.CastSpell("Polynectar") + " and gain 50pts for " + harry.GetHouse() + ".\n";
	cout << harry.What("Polynectar");
	cout << harry.What("Lumos");
	cout << snape.What("Lumos");
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
