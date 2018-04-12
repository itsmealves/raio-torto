//
// Created by gabriel on 12/04/18.
//

#include "Renderer.h"

Renderer::Renderer(int wx, int wy, int ix, int iy, int f) {
    float fx = (ix / wx) * f;
    float fy = (iy / wy) * f;
    float cx = ((float) ix) / 2.0f;
    float cy = ((float) iy) / 2.0f;

    _kInv[2][2] = 1;
    _kInv[1][2] = cy / fy;
    _kInv[0][2] = -cx / fx;
    _kInv[0][0] = 1.0f / fx;
    _kInv[1][1] = -1.0f / fy;
    _kInv[0][1] = _kInv[1][0] = _kInv[2][0] = _kInv[2][1] = 0;

    _width = ix;
    _height = iy;
}

void Renderer::render(World w, std::string path) {
    std::vector<Thing *> things = w.getThings();
    Thing *t = things[0];

    std::ofstream file;
    file.open(path);

    file << "P3" << std::endl;
    file << _width << " " << _height << std::endl;
    file << "255" << std::endl;


    for(int j = 0; j < _height; j++) {
        for(int i = 0; i < _width; i++) {
            int red = 255; int green = 255; int blue = 255;
            Ray *ray = genRay({(float) i, (float) j, 1.0f});

            if(t->intersectedBy(ray)) {
                t->getRGB(&red, &green, &blue);
            }

            file << red << " " << green << " " << blue << " ";
        }

        file << std::endl;
    }

    file.close();
}

Ray *Renderer::genRay(std::vector<float> point) {
    Vector *v = new Vector(3);
    Vector *origin = new Vector(3);

    for(int i = 0; i < 3; i++) {
        float x = 0;

        for(int j = 0; j < 3; j++) {
            x += _kInv[i][j] * point[j];
        }

        v->set(i, x);
        origin->set(i, 0);
    }

    v->normalize();
    return new Ray(v, origin);
}
