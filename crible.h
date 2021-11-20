//
// Created by anton on 20.11.2021.
//

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
