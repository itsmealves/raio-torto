//
// Created by gabriel on 12/04/18.
//

#ifndef RAIO_TORTO_WORLD_H
#define RAIO_TORTO_WORLD_H

#include <vector>
#include "../thing/Thing.h"

class World {
    public:
        World();
        void addThing(Thing *thing);
        std::vector<Thing *> getThings();
    private:
        std::vector<Thing *> things;
};


#endif //RAIO_TORTO_WORLD_H
