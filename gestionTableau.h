/*
-----------------------------------------------------------------------------------
Nom du fichier : gestionTableau.h
Nom du labo    : Labo 06 : crible Eratosthène
Auteur(s)      : Laetitia Guidetti et Antonio Pollino
Date creation  : 19.11.2021
Description    : Déclaration des fonctions permettant l'affichage d'un segment
                 précis ou d'une position d'un tableau, ainsi que la récupération
                 d'informations telle que la position d'une valeur dans un tableau.
Remarque(s)    : -
Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO06_CRIBLE_GESTIONTABLEAU_H
#define LABO06_CRIBLE_GESTIONTABLEAU_H


/// Nom             afficherTableau
/// But             Afficher un tableau depuis un index minimal jusqu'à un index
///                 maximal. Le caractère affiché en fonction de la valeur du
///                 tableau est à choisir.
///
/// \param tab      Le tableau à afficher
/// \param min      L'index minimal depuis lequel l'affichage commence
/// \param max      L'index maximal où l'affichage se finit. Il doit être
///                 strictement plus petit que la taille du tableau
/// \param vrai     Charactère à afficher quand la valeur est égale à 1
/// \param faux     Charactère à afficher quand la valeur est égale à 0
/// \param colonne  Nombre de colonnes de l'affichage
void afficherTableau(const bool tab[], unsigned min, unsigned max,
                     char vrai, char faux, unsigned colonne = 10);


/// Nom                 positionValeur
/// But                 Retourner la position du premier élément trouvé
///                     correspondant à la valeur passé en paramètre
///
/// \param tab          Le tableau à afficher
/// \param taille       Taille du tableau
/// \param valeur       Valeur recherchée
/// \param position     Position depuis laquelle il faut chercher la valeur
/// \return             Retourne la position du premier élément trouvé
unsigned positionValeur(const bool tab[], unsigned taille, bool valeur,
                        unsigned position);


/// Nom                 afficherPositionValeur
/// But                 Afficher les positions correspondantes à la valeur entrée
///                     en paramètre
///
/// \param tab          Le tableau à afficher
/// \param min          L'index minimal depuis lequel l'affichage commence
/// \param max          L'index maximal où l'affichage se finit. Il doit être
///                     strictement plus petit que la taille du tableau
/// \param valeur       Valeur dont les positions doivent être affichées
/// \param colonne      Nombre de colonnes de l'affichage
/// \param alignement   Espacement d'un nombre à l'autre lors de l'affichage
void afficherPositionValeur(const bool tab[], unsigned min, unsigned max,
                            bool valeur, unsigned colonne = 10, int alignement = 2);

#endif //LABO06_CRIBLE_GESTIONTABLEAU_H
