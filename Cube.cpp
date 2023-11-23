#include "Cube.h"

Cube::Cube() : Objet2D(0, 0 ) {}

Cube::Cube(int tcote) : Objet2D(tcote, tcote){}

int Cube::getCote(){
    return dim1;
}

int Cube::getPerimetre(){
    return 12* dim1;
}

int Cube::getAire(){
    return 6* dim1 * dim1;
}

std::string Cube::afficheInfo(){
    return "Cube : Cote = " + std::to_string(dim1)+
    ", Perimetre = " + std::to_string(getPerimetre())+
    ", Aire = " + std::to_string(getAire());
}