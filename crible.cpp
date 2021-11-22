/*
-----------------------------------------------------------------------------------
Nom du fichier : crible.cpp
Nom du labo    : Labo 06 : crible Eratosthène
Auteur(s)      : Laetitia guidetti et Antonio Pollino
Date creation  : 20.11.2021
Description    : Définition de la fonction permettant de cribler le tableau.
Remarque(s)    : -
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#include "crible.h"

void criblageTableau(bool tab[], unsigned taille, bool valeur,
                     unsigned diviseur) {

   unsigned deplacement = diviseur;
   diviseur *= diviseur;

   for(; diviseur < taille; diviseur += deplacement) {
      tab[diviseur] = valeur;
   }
}


