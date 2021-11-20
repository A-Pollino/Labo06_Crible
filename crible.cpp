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

#include "crible.h"

using namespace std;



void divisionTableau(bool tab[], unsigned taille,
                     unsigned position, unsigned diviseur) {

   for(; position <= taille; ++position) {

      if (!(position % diviseur)) {
         tab[position] = true;
      }
   }
}


