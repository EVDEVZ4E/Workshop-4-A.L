#ifndef OBJET2DLIST_H
#define OBJET2DLIST_H

#include "Objet2D.h"

class Objet2DList{
    private : 
        Objet2D* Head;// Pointeur vers le premier élément de la liste
        Objet2D* Tail;// Pointeur vers le dernier élément de la liste
    
    public :
        Objet2DList();
        ~Objet2DList();// Destructeur pour gérer la libération de la mémoire

        void ajouterAtHead(Objet2D* nouvelObjet);
        void ajouterAtTail(Objet2D* nouvelObjet);
        void supprimerAtHead();
        void supprimerAtTail();
        void afficherInfo() const;
};

#endif