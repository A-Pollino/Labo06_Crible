/*
-----------------------------------------------------------------------------------
Nom du fichier : <nom du fichier>.<xxx>
Nom du labo : <nom du labo>
Auteur(s) : <prénom> <nom>
Date creation : <jj.mm.aaaa>
Description : <à compléter>
Remarque(s) : <à compléter>
Compilateur : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/
#include <iostream>
#include <string>
#include <limits>
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
