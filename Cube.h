#ifndef Cube_H
#define Cube_H

#include "Objet2D.h"

class Cube : public Objet2D {
    public: 
        Cube();
        Cube(int tcote);
        int getCote();
        int getPerimetre();
        int getAire();
        std::string afficheInfo();
};

#endif