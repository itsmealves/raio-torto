//
// Created by gabriel on 12/04/18.
//

#include "Thing.h"

Thing::Thing(int red, int green, int blue) {
    _red = red;
    _green = green;
    _blue = blue;
}

void Thing::getRGB(int *red, int *green, int *blue) {
    *red = _red;
    *green = _green;
    *blue = _blue;
}
