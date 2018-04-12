//
// Created by gabriel on 12/04/18.
//

#ifndef RAIO_TORTO_RENDERED_H
#define RAIO_TORTO_RENDERED_H


#include <string>
#include <fstream>
#include <iostream>
#include "World.h"

class Renderer {
    public:
        Renderer(int wx, int wy, int ix, int iy, int f);
        void render(World w, std::string path);
    private:
        int _width;
        int _height;
        std::vector<std::vector<float>> _kInv = {{0,0,0}, {0,0,0}, {0,0,0}};
        Ray *genRay(std::vector<float> point);
};


#endif //RAIO_TORTO_RENDERED_H
