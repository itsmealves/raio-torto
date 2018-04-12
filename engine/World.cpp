//
// Created by gabriel on 12/04/18.
//

#include "World.h"


World::World() = default;


void World::addThing(Thing *thing) {
    things.push_back(thing);
}

std::vector<Thing *> World::getThings(void) {
    return things;
}



