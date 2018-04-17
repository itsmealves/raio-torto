//
// Created by gabriel on 12/04/18.
//

#ifndef RAIO_TORTO_WORLD_H
#define RAIO_TORTO_WORLD_H

#include <vector>
#include "../thing/Thing.h"
#include "LightSource.h"

class World {
    public:
        World();
        void addThing(Thing *thing);
        void addLightSource(LightSource *source);
        std::vector<Thing *> getThings();
        std::vector<LightSource *> getLightSources();
    private:
        std::vector<LightSource *> lights;
        std::vector<Thing *> things;
};


#endif //RAIO_TORTO_WORLD_H
