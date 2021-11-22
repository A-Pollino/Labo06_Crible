/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du labo    : Labo 06 : crible Eratosthène
Auteur(s)      : Laetitia Guidetti et Antonio Pollino
Date creation  : 19.11.2021
Description    : Ce programme permet d'identifier les nombres premiers, jusqu'à un
                 nombre donné par la saisie de l'utilisateur. Pour cela, la
                 méthode employée est celle du crible d'Eratosthène.

                 Pour plus d'informations concernant la méthode d'Eratosthène :
                 https://fr.wikipedia.org/wiki/Crible_d%27%C3%89ratosth%C3%A8ne

Remarque(s)    : La saisie de l'utilisateur est contrôlée, si une valeur ne
                 correspond pas au spectre ou n'est pas un nombre entier, le
                 programme demande l'entrée d'une nouvelle valeur.


Compilateur    : Mingw-w64 g++ 11.1.0
-----------------------------------------------------------------------------------
*/
#include <cstdlib>           // EXIT_SUCCESS
#include <iostream>          // cout
#include <limits>            // numeric_limits
#include <string>            // type string

#include "saisie.h"          // fonction saisie
#include "gestionTableau.h"  // fonctions afficherTableau, positionValeur,
                             // afficherPositionValeur
#include "crible.h"          // fonction criblageTableau

using namespace std;

int main() {

   //-----------------------------------------------------------------
   // Constantes
   //-----------------------------------------------------------------
   // Messages
   const string MSG_SAISIE       = "Nombre de valeurs"s;
   const string MSG_ERREUR       = "Erreur de saisie"s;
   const string MSG_QUITTER      = "Presser ENTER pour quitter"s;
   const string MSG_INIT_TAB     = "Initialisation du tableau"s;
   const string MSG_CRIBLAGE     = "Criblage du tableau"s;
   const string MSG_NBR_PREMIERS = "Nombre de premiers : "s;

   // Constantes fonctionnelles
   const int    MIN_SAISIE       = 2;
   const int    MAX_SAISIE       = 100;
   const int    DECALAGE         = 1;
   const char   AFFICHAGE_VRAI   = 'X';
   const char   AFFICHAGE_FAUX   = '0';
   const bool   PREMIER          = false;
   const bool   PAS_PREMIER      = true;

   //-----------------------------------------------------------------
   // Bienvenue
   //-----------------------------------------------------------------
   cout << "Ce programme identifie tous les nombres premiers jusqu'au nombre "
           "choisi par l'utilisateur, "               << endl;
   cout << "selon la methode du crible d'Eratosthene" << endl << endl;

   //-----------------------------------------------------------------
   // Saisie et initialisation du tableau
   //-----------------------------------------------------------------
   const unsigned TAILLE = (unsigned)(DECALAGE +
                           saisie(MIN_SAISIE, MAX_SAISIE, MSG_SAISIE,MSG_ERREUR));
   bool tableau[TAILLE];
   for(unsigned i = 0; i < TAILLE; ++i) {
      tableau[i] = false;
   }

   cout << endl;
   cout << MSG_INIT_TAB << endl;
   afficherTableau(tableau, DECALAGE, TAILLE - 1, AFFICHAGE_VRAI, AFFICHAGE_FAUX);
   cout << endl;

   //-----------------------------------------------------------------
   // Identification des nombres premiers
   //-----------------------------------------------------------------
   unsigned position = 2;
   int      compteur = 0;

   tableau[1] = true; // 1 est un cas particulier, ni premier, ni composé

   // Crible d'Eratosthène
   while (position < TAILLE) {

      criblageTableau(tableau, TAILLE, PAS_PREMIER, position);
      ++position;
      ++compteur;
      position = positionValeur(tableau, TAILLE, PREMIER, position);
   }

   //-----------------------------------------------------------------
   // Affichage du criblage et des nombres premiers
   //-----------------------------------------------------------------
   cout << MSG_CRIBLAGE << endl;
   afficherTableau(tableau, DECALAGE, TAILLE - 1, AFFICHAGE_VRAI, AFFICHAGE_FAUX);
   cout << endl;

   cout << MSG_NBR_PREMIERS << compteur << endl;
   afficherPositionValeur(tableau, DECALAGE, TAILLE - 1, PREMIER);
   cout << endl;

   //-----------------------------------------------------------------
   // Fin de programme
   //-----------------------------------------------------------------
   cout << MSG_QUITTER;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}



