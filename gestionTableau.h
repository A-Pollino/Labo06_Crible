//
// Created by anton on 20.11.2021.
//

#ifndef LABO06_CRIBLE_GESTIONTABLEAU_H
#define LABO06_CRIBLE_GESTIONTABLEAU_H

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
