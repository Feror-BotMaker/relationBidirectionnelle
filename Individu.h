/**
 * @file Individu.h
 * @author Philou
 * @brief L'individu waaa
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */

/**
 * @brief Cette classe définit un Individu à partir de son nom et de son prénom.
 * 
 * @details Au delà de son nom et de son prénom, un Individu peut être lié à une Voiture qu'il conduit.
 * 
 * La Voiture conduite par l'Individu est définie par un pointeur vers un object Voiture.
 * 
 * @warning Un Individu ne peut conduire qu'une seule Voiture.
 */
class Individu
{
    // ATTRIBUTS
  public:
    /**
     * @brief Le nom de l'individu
     * 
     */
    string nom;

    /**
     * @brief Le prénom de l'individu
     * 
     */
    string prenom; 

    /**
     * @brief Lien avec la voiture de l'individu
     * 
     */
    Voiture *maVoiture;


    // MÉTHODES
  public:
    /**
     * @brief Construit un object Individu à partir de son nom(premier paramètre) et de son prénom (second paramètre).
     * 
     */
    Individu(string = "", string = "");
    /**
     * @brief Destroy the Individu object
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @return string sous la forme "nom  prenom"
     * 
     * @bug Un espace en trop entre le nom et le prénom
     * 
     * @todo Ajouter un paramètre permettant de choisir l'order de l'affichage (nom prénom ou prénom nom)
     */
    string toString(); 
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Définit la Voiture conduite par l'Individu
     * 
     * @param voiture Un pointeur vers un object Voiture conduit par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H