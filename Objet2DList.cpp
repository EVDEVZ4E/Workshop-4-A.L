#include "Objet2DList.h"
#include <iostream>

// Constructeur
Objet2DList::Objet2DList() : Head(nullptr), Tail(nullptr) {}

// Destructeur
Objet2DList::~Objet2DList() {
    Objet2D* current = Head;
    while (current != nullptr) {
        Objet2D* next = current->getSuivant();
        delete current;
        current = next;
    }
}

// Ajouter un objet en tête de liste
void Objet2DList::ajouterAtHead(Objet2D* nouvelObjet) {
    if (Head == nullptr) {
        Head = nouvelObjet;
        Tail = nouvelObjet;
    } else {
        nouvelObjet->setSuivant(Head);
        Head = nouvelObjet;
    }
}

// Ajouter un objet en fin de liste
void Objet2DList::ajouterAtTail(Objet2D* nouvelObjet) {
    if (Tail == nullptr) {
        Head = nouvelObjet;
        Tail = nouvelObjet;
    } else {
        Tail->setSuivant(nouvelObjet);
        Tail = nouvelObjet;
    }
}

// Supprimer l'objet en tête de liste
void Objet2DList::supprimerAtHead() {
    if (Head != nullptr) {
        Objet2D* temp = Head;
        Head = Head->getSuivant();
        delete temp;

        if (Head == nullptr) {
            Tail = nullptr;
        }
    }
}

// Supprimer l'objet en fin de liste
void Objet2DList::supprimerAtTail() {
    // Cette opération est plus complexe dans une liste chaînée unidirectionnelle
    // car il faut parcourir la liste pour trouver l'avant-dernier élément
    if (Tail != nullptr) {
        if (Head == Tail) {
            delete Head;
            Head = nullptr;
            Tail = nullptr;
        } else {
            Objet2D* current = Head;
            while (current->getSuivant() != Tail) {
                current = current->getSuivant();
            }
            delete Tail;
            Tail = current;
            Tail->setSuivant(nullptr);
        }
    }
}

// Afficher les informations de tous les objets dans la liste
void Objet2DList::afficherInfo() const {
    Objet2D* current = Head;
    while (current != nullptr) {
        std::cout << current->afficheInfo() << std::endl;
        current = current->getSuivant();
    }
}
