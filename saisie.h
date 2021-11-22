/*
-----------------------------------------------------------------------------------
Nom du fichier : saisie.h
Nom du labo    : Labo 06 : crible Eratosthène
Auteur(s)      : Laetitia guidetti et Antonio Pollino
Date creation  : 19.11.2021
Description    : Définition de la fonction permettant d'obtenir une saisie
                 utilisateur contrôlée entre une valeur minimale et une valeure
                 maximale.
Remarque(s)    : -
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO06_CRIBLE_SAISIE_H
#define LABO06_CRIBLE_SAISIE_H

#include <string>    // type string


/// Nom                     saisie
/// But                     Permet de récupérer une saisie d'utilisateur contrôlée
///
/// \param min              Valeur minimale comprise
/// \param max              Valeur maximal comprise
/// \param saisieMessage    Message à afficher lors de la saisie
/// \param erreurMessage    Message à afficher lors d'une erreur de saisie
/// \return                 Valeur saisie de l'utilisateur en int
int saisie(int min, int max, const std::string& saisieMessage,
           const std::string& erreurMessage);

#endif //LABO06_CRIBLE_SAISIE_H
