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

#ifndef LABO06_CRIBLE_SAISIE_H
#define LABO06_CRIBLE_SAISIE_H

#include <string>

///
/// \param min
/// \param max
/// \param saisieMessage
/// \param erreurMessage
/// \return
int saisie(int min, int max, const std::string& saisieMessage,
           const std::string& erreurMessage);

#endif //LABO06_CRIBLE_SAISIE_H
