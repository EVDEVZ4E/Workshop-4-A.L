#include "Objet2D.h"

Objet2D::Objet2D() : dim1(0), dim2(0){}

Objet2D::Objet2D(int tdim1, int tdim2) : dim1(tdim1), dim2(tdim2){}

Objet2D* Objet2D::getSuivant() const {
    return Suivant;
}

void Objet2D::setSuivant(Objet2D* newSuivant){
    Suivant = newSuivant;
}