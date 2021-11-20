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

#ifndef LABO06_CRIBLE_CRIBLE_H
#define LABO06_CRIBLE_CRIBLE_H


/// Nom              /
/// But              Modifier toutes les valeurs dont l'index est divisible par le
///                  diviseur.
///
/// \param tab       Le tableau à modifier
/// \param taille    La taille du tableau
/// \param position  Position depuis laquelle le test effectué
/// \param diviseur  Diviseur
void divisionTableau(bool tab[], unsigned taille,
                     unsigned position, unsigned diviseur);

#endif //LABO06_CRIBLE_CRIBLE_H
