//
// Created by gabriel on 12/04/18.
//

#ifndef RAIO_TORTO_VECTOR_H
#define RAIO_TORTO_VECTOR_H

#include <vector>

class Vector {
    public:
        explicit Vector(int dimension);

        Vector();

        Vector *operator+(Vector *v);
        Vector *operator-(Vector *v);
        float dot(Vector *v);
        int getDimension();
        float get(int index);
        float norm();
        void normalize();
        void set(int index, float v);
    private:
        int _dimension;
        std::vector<float> _data;
};


#endif //RAIO_TORTO_VECTOR_H
