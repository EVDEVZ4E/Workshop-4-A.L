#include "Rectangle.h"
#include "Cube.h"
#include "Objet2DList.h" 
#include <iostream>
#include <string>

int main() {
    Objet2D* ptr;
    Objet2DList liste; 
    std::string choix;

    while (true) {    
        std::cout << "\nChoisissez un objet (R pour Rectangle, C pour Cube, Q pour Quitter) :\n";
        std::cin >> choix;
        if (choix == "R") {
            int longueur, largeur;
            std::cout << "Entrez la longueur du rectangle: ";
            std::cin >> longueur;
            std::cout << "Entrez la largeur du rectangle: ";
            std::cin >> largeur;
            ptr = new Rectangle(longueur, largeur);
            std::cout<< ptr->afficheInfo();
            liste.ajouterAtTail(new Rectangle(longueur, largeur)); // Ajout à la liste
        
        } else if (choix == "C") {
            int cote;
            std::cout << "Entrez la longueur du cote du Cube: ";
            std::cin >> cote;
            ptr = new Cube(cote);
            std::cout<< ptr->afficheInfo();
             
            liste.ajouterAtTail(new Cube(cote)); // Ajout à la liste
        
        } else if (choix == "Q") {
            break; // Condition d'arrêt
        }
    
    }

    std::cout << "\nAffichage de tous les objets stockes:\n";
    liste.afficherInfo(); // Affichage des informations de tous les objets


    return 0;
}
