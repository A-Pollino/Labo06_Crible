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

#include <iostream>         // cout
#include "gestionTableau.h"

using namespace std;

void afficherTableau(const bool tab[], unsigned min, unsigned max,
                     char vrai, char faux, unsigned colonne) {

   unsigned nombreColonnes = 0;
   for(unsigned i = min; i <= max; ++i) {

      tab[i] ? cout << vrai : cout << faux;
      cout << " ";

      if(++nombreColonnes == colonne)
      {
         cout << endl;
         nombreColonnes = 0;
      }
   }
}

unsigned positionValeur(const bool tab[], unsigned taille, bool valeur,
                        unsigned position){

   for( ; position < taille; ++position){
         if (tab[position] == valeur){
            return position;
         }
   }
   return taille;
}

void calculNombresPremiers(const bool tab[], unsigned min, unsigned max,
                           bool valeur){

   for(unsigned position = min; position <= max; ++position){
      if (valeur == tab[position]){
         cout << position << " ";
      }
   }
}
