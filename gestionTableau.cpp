/*
-----------------------------------------------------------------------------------
Nom du fichier : gestionTableau.cpp
Nom du labo    : Labo 06 : crible Eratosthène
Auteur(s)      : Laetitia guidetti et Antonio Pollino
Date creation  : 19.11.2021
Description    : Définition des fonctions permettant l'affichage, et la
                 récupération d'informations d'un tableau.
Remarque(s)    : -
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

      // Retour à la ligne lorsque colonne est atteint
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

void afficherPositionValeur(const bool tab[], unsigned min, unsigned max,
                            bool valeur, unsigned colonne, int alignement) {

   unsigned nombreColonnes = 0;
   for(unsigned position = min; position <= max; ++position){
      if (valeur == tab[position]) {
         cout << setw(alignement) << position << " ";

         // Retour à la ligne lorsque colonne est atteint
         if(++nombreColonnes == colonne && position != max) {
            cout << endl;
            nombreColonnes = 0;
         }
      }
   }
   cout << endl;
}
