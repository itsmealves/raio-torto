//
// Created by gabriel on 17/04/18.
//

#ifndef RAIO_TORTO_LIGHTSOURCE_H
#define RAIO_TORTO_LIGHTSOURCE_H


#include "Ray.h"

class LightSource {
    public:
        LightSource(Vector *intensity, Vector *position);
        Ray *rayTo(float x, float y, float z);
        Ray *rayTo(Vector *v);
        Vector *getIntensity();
    private:
        Vector *_intensity;
        Vector *_position;
};


#endif //RAIO_TORTO_LIGHTSOURCE_H
