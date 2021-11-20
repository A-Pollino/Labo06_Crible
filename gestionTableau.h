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


/// Nom             afficherTableau
/// But             Afficher un tableau depuis un index minimal jusqu'à un index
///                 maximal. Le caractère affiché en fonction de la valeur du
///                 tableau est à choisir.
///
/// \param tab      Le tableau à afficher
/// \param min      L'index minimal depuis le quel l'affichage commence
/// \param max      L'index maximal où l'affichage se finit. Il doit être
///                 strictement plus petit que la taille du tableau
/// \param vrai     Charactère à afficher quand la valeur est égale à 1
/// \param faux     Charactère à afficher quand la valeur est àgale à 0
/// \param colonne  Nombre de colonnes de l'affichage
void afficherTableau(const bool tab[], unsigned min, unsigned max,
                     char vrai, char faux, unsigned colonne = 10);

#endif //LABO06_CRIBLE_GESTIONTABLEAU_H
