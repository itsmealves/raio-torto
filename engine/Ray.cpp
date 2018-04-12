//
// Created by gabriel on 12/04/18.
//

#include "Ray.h"
#include "../math/Vector.h"

Ray::Ray(Vector *v, Vector *p) {
    _v = v;
    _p = p;
}

Vector * Ray::getVector() {
    return _v;
}

Vector *Ray::getPoint() {
    return _p;
}
