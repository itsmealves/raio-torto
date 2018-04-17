//
// Created by gabriel on 17/04/18.
//

#include "LightSource.h"

Ray *LightSource::rayTo(float x, float y, float z) {
    Vector *point = new Vector({_position->get(0), _position->get(1), _position->get(2)});
    Vector *vector = new Vector({_position->get(0) - x, _position->get(1) - y, _position->get(2) - z});

    vector->normalize();
    Ray *ray = new Ray(vector, point);

    return ray;
}

Vector *LightSource::getIntensity() {
    return _intensity;
}

LightSource::LightSource(Vector *intensity, Vector *position) {
    _intensity = intensity;
    _position = position;
}

Ray *LightSource::rayTo(Vector *v) {
    return rayTo(v->get(0), v->get(1), v->get(2));
}


