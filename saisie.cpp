/*
-----------------------------------------------------------------------------------
Nom du fichier : saisie.cpp
Nom du labo    : Labo 06 : crible Eratosthène
Auteur(s)      : Laetitia Guidetti et Antonio Pollino
Date creation  : 19.11.2021
Description    : Déclaration de la fonction permettant d'obtenir une saisie
                 utilisateur contrôlée.
Remarque(s)    : -
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/
#include <iostream>     // cout, cin
#include <string>       // type string
#include <limits>       // numeric_limits
#include "saisie.h"

using namespace std;

int saisie(int min, int max, const string& saisieMessage,
           const string& erreurMessage) {

   bool erreur;
   int  saisie;

   do {
      // message et saisie
      cout << saisieMessage << " [" << min << " - " << max << "] :";

      // vérification
      erreur = !(cin >> saisie) || saisie < min || saisie > max;
      if (erreur) {
         cout << erreurMessage << endl;
         cin.clear();
      }

      // vider buffer
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while(erreur);
   return saisie;
}
