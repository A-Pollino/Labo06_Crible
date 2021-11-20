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

#ifndef LABO06_CRIBLE_GESTIONTABLEAU_H
#define LABO06_CRIBLE_GESTIONTABLEAU_H

///-----------------------------------------------------
///
/// \param tab
/// \param taille
/// \param valeur
/// \param position
/// \return
///------------------------------------------------------
unsigned positionValeur(const bool tab[], unsigned taille, bool valeur,
                        unsigned position);

///-----------------------------------------------------
///
/// \param tab
/// \param min
/// \param max
/// \param valeur
///-----------------------------------------------------
void calculNombresPremiers(const bool tab[], unsigned min, unsigned max,
                           bool valeur);


#endif //LABO06_CRIBLE_GESTIONTABLEAU_H
