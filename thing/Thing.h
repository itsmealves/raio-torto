//
// Created by gabriel on 12/04/18.
//

#ifndef RAIO_TORTO_THING_H
#define RAIO_TORTO_THING_H


#include <string>
#include "../engine/Ray.h"

class Thing {
    public:
        Thing(int red, int green, int blue);
        virtual bool intersectedBy(Ray *ray) = 0;
        void getRGB(int *red, int *green, int *blue);
    private:
        int _red;
        int _green;
        int _blue;
};


#endif //RAIO_TORTO_THING_H
