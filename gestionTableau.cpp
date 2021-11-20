//
// Created by anton on 20.11.2021.
//

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