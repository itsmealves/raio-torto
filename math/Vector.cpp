//
// Created by gabriel on 12/04/18.
//

#include <cmath>
#include "Vector.h"

Vector::Vector(int dimension) {
    _dimension = dimension;
    _data = std::vector<float>(dimension);
}

Vector *Vector::operator+(Vector *v) {
    Vector *result = new Vector(getDimension());

    for(int i = 0; i < getDimension(); i++) {
        float x = get(i) + v->get(i);
        result->set(i, x);
    }

    return result;
}

Vector *Vector::operator-(Vector *v) {
    Vector *result = new Vector(getDimension());

    for(int i = 0; i < getDimension(); i++) {
        float x = get(i) - v->get(i);
        result->set(i, x);
    }

    return result;
}


int Vector::getDimension() {
    return _dimension;
}

float Vector::get(int index) {
    return _data[index];
}

void Vector::set(int index, float v) {
    _data[index] = v;
}

float Vector::dot(Vector *v) {
    float result = 0;

    for(int i = 0; i < getDimension(); i++)
        result += get(i) * v->get(i);

    return result;
}

float Vector::norm() {
    float result = 0;

    for(int i = 0; i < getDimension(); i++)
        result += get(i) * get(i);

    return (float) sqrt(result);
}

void Vector::normalize() {
    float x = norm();

    for(int i = 0; i < getDimension(); i++)
        set(i, get(i) / x);
}





