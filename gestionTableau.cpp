/*
-----------------------------------------------------------------------------------
Nom du fichier : <nom du fichier>.<xxx>
Nom du labo    : <nom du labo>
Auteur(s)      : <prénom> <nom>
Date creation  : <jj.mm.aaaa>
Description    : <à compléter>
Remarque(s)    : <à compléter>
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#include <iostream>         // cout
#include <iomanip>          // setw

#include "gestionTableau.h"


using namespace std;

void afficherTableau(const bool tab[], unsigned min, unsigned max,
                     char vrai, char faux, unsigned colonne) {

   unsigned nombreColonnes = 0;
   for(unsigned position = min; position <= max; ++position) {
      tab[position] ? cout << vrai : cout << faux;
      cout << " ";

      if(++nombreColonnes == colonne && position != max) {
         cout << endl;
         nombreColonnes = 0;
      }
   }
   cout << endl;
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

void afficherNombresPremiers(const bool tab[], unsigned min, unsigned max,
                             bool valeur, unsigned colonne, int alignement) {

   unsigned nombreColonnes = 0;
   for(unsigned position = min; position <= max; ++position){
      if (valeur == tab[position]) {
         cout << setw(alignement) << position << " ";

         if(++nombreColonnes == colonne && position != max) {
            cout << endl;
            nombreColonnes = 0;
         }
      }
   }
   cout << endl;
}
