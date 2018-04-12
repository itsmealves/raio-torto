//
// Created by gabriel on 12/04/18.
//

#ifndef RAIO_TORTO_SPHERE_H
#define RAIO_TORTO_SPHERE_H


#include "Thing.h"

class Sphere : public Thing {
    public:
        Sphere(int red, int green, int blue, int r, Vector *center);
        bool intersectedBy(Ray *ray) override;
    private:
        Vector *_center;
        int _r;
};


#endif //RAIO_TORTO_SPHERE_H
