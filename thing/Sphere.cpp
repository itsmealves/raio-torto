//
// Created by gabriel on 12/04/18.
//

#include <iostream>
#include <cmath>
#include "Sphere.h"

Sphere::Sphere(int red, int green, int blue, int r, Vector *center) : Thing(red, green, blue) {
    _center = center;
    _r = r;
}

bool Sphere::intersectedBy(Ray *ray) {
    Vector omc(3);

    for(int i = 0; i < 3; i++) {
        omc.set(i, ray->getPoint()->get(i) - _center->get(i));
    }

    float x1 = omc.dot(ray->getVector());
    float x2 = ray->getVector()->dot(ray->getVector());
    float x3 = omc.dot(&omc) - (_r * _r);

    float discriminant = pow(x1 * 2.0f, 2) - 4 * x2 * x3;
    return discriminant >= 0.0f;
}


