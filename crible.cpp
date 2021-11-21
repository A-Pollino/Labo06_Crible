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

#include "crible.h"

void divisionTableau(bool tab[], unsigned taille, bool valeur,
                     unsigned position, unsigned deplacement) {

   for(; position < taille; position += deplacement) {
      tab[position] = valeur;
   }
}


