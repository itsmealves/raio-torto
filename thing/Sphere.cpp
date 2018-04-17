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

bool Sphere::intersectedBy(Ray *ray, Vector *point) {
    Vector omc(3);

    for(int i = 0; i < 3; i++) {
        omc.set(i, ray->getPoint()->get(i) - _center->get(i));
    }

    float x1 = 2.0f * omc.dot(ray->getVector());
    float x2 = ray->getVector()->dot(ray->getVector());
    float x3 = omc.dot(&omc) - (_r * _r);

    auto discriminant = static_cast<float>(pow(x1, 2) - 4 * x2 * x3);
    if(discriminant < 0) return false;

    auto t1 = static_cast<float>((sqrt(discriminant) - x1) / (2.0f * x2));
    auto t2 = static_cast<float>((-sqrt(discriminant) - x1) / (2.0f * x2));
    float t = t1 < t2? t1 : t2;

    for(int i = 0; i < 3; i++) {
        float v = ray->getPoint()->get(i) + (ray->getVector()->get(i) * t);
        point->set(i, v);
    }

    return true;
}

Vector *Sphere::getNormal(Vector *point) {
    float x = point->get(0) - _center->get(0);
    float y = point->get(1) - _center->get(1);
    float z = point->get(2) - _center->get(2);

    Vector *normal = new Vector({x, y, z});
    normal->normalize();

    return normal;
}


