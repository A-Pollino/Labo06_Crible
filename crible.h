/*
-----------------------------------------------------------------------------------
Nom du fichier : crible.h
Nom du labo    : Labo 06 : crible Eratosthène
Auteur(s)      : Laetitia Guidetti et Antonio Pollino
Date creation  : 20.11.2021
Description    : Déclaration de la fonction permettant de cribler le tableau en
                 fonction de la taille et du caractère souhaité.
Remarque(s)    : -
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO06_CRIBLE_CRIBLE_H
#define LABO06_CRIBLE_CRIBLE_H


/// Nom                 criblageTableau
/// But                 Remplacer les valeurs dont la position est divisible par
///                     le diviseur et est plus grande ou égale à diviseur^2
///
/// \param tab          Le tableau à modifier
/// \param taille       La taille du tableau
/// \param valeur       La nouvelle valeur à insérer dans le tableau
/// \param diviseur     Valeur utilisée pour tester si la position est un multiple
///                     de diviseur et est plus grande ou égale à diviseur^2
void criblageTableau(bool tab[], unsigned taille, bool valeur,
                     unsigned diviseur);

#endif //LABO06_CRIBLE_CRIBLE_H
