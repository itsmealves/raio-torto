#include <iostream>
#include "thing/Thing.h"
#include "thing/Sphere.h"
#include "engine/World.h"
#include "engine/Renderer.h"

int main() {
    World world;
    Vector *center = new Vector(3);

    center->set(0, 0);
    center->set(1, 0);
    center->set(2, 10);

    Sphere *sphere = new Sphere(255, 0, 0, 2, center);
    Renderer renderer(32, 18, 1920, 1080, 5);

    world.addThing(sphere);
    renderer.render(world, "out.ppm");

    return 0;
}