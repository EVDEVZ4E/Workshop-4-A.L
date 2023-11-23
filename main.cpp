
/*
#include "Rectangle.h"
#include "Cube.h"
#include "Objet2DList.h"
#include <iostream>
#include <string>

int main(){
    Objet2D* ptr;
    int dim1, dim2;
    int boucle = 0;
while(boucle < 1){    
    std::string choix("");
    std::cout<< "Choisissez un objet(R pour Rectangle, C pour Cube):";
    std::cin >> choix; 

    if(choix == "R"){
    std::cout<< "Entrez la longueur du rectangle : ";
    std::cin >> dim1;
    std::cout<<"Entrez la largeur du rectangle :";
    std::cin >> dim2;
    ptr = new Rectangle(dim1, dim2);
    boucle++;
    }
    
    if(choix == "C"){
        std::cout<< "Entrez la longueur du cote du Cube: ";
        std::cin >> dim1;
        ptr = new Cube(dim1);
    boucle++;
    }
}
    std::cout<< ptr->afficheInfo();
    delete ptr; 

    return 0;

}   
*/

#include "Rectangle.h"
#include "Cube.h"
#include "Objet2DList.h" // Assurez-vous que cette classe est correctement définie et incluse
#include <iostream>
#include <string>

int main() {
    Objet2D* ptr;
    Objet2DList liste; // Instance de votre classe de stockage
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

    // Ici, vous pouvez ajouter d'autres opérations sur la liste si nécessaire

    return 0;
}
