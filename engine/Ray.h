//
// Created by gabriel on 12/04/18.
//

#ifndef RAIO_TORTO_RAY_H
#define RAIO_TORTO_RAY_H


#include "../math/Vector.h"

class Ray {
    public:
        explicit Ray(Vector *v, Vector *p);
        Vector * getVector();
        Vector *getPoint();
    private:
        Vector *_v;
        Vector *_p;
};


#endif //RAIO_TORTO_RAY_H
