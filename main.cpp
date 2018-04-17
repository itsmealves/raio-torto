#include <iostream>
#include "thing/Thing.h"
#include "thing/Sphere.h"
#include "engine/World.h"
#include "engine/Renderer.h"

int main(int argc, char *argv[]) {
    std::cout << "Geração de uma imagem de uma esfera" << std::endl;

    if(argc != 6) {
        std::cout << "Quantidade de argumentos incompatíveis" << std::endl;
        exit(1);
    }

    int f = std::stoi(argv[1]);
    int windowWidth = std::stoi(argv[2]);
    int windowHeight = std::stoi(argv[3]);
    int imageWidth = std::stoi(argv[4]);
    int imageHeight = std::stoi(argv[5]);

    std::cout << "Usando os seguintes valores:" << std::endl;
    std::cout << "\tf: " << f << std::endl;
    std::cout << "\tWindow width: " << windowWidth << std::endl;
    std::cout << "\tWindow height: " << windowHeight << std::endl;
    std::cout << "\tImage width: " << imageWidth << std::endl;
    std::cout << "\tImage height: " << imageHeight << std::endl;

    World world;

    std::cout << std::endl << " * Mundo criado * " << std::endl;

    Vector sphereCenter({0, 0, 10});
    Sphere sphere(255, 0, 0, 2, &sphereCenter);
    std::cout << std::endl << " * Esfera criada * " << std::endl;

    Vector lightSourceCenter({0, 8, 7.5});
    Vector lightSourceIntensity({0.5, 0.5, 0.5});
    LightSource lightSource(&lightSourceIntensity, &lightSourceCenter);
    std::cout << std::endl << " * Fonte de luz criada * " << std::endl;

    Renderer renderer(windowWidth, windowHeight, imageWidth, imageHeight, f);
    std::cout << std::endl << " * Motor de geração iniciado * " << std::endl;

    world.addThing(&sphere);
    world.addLightSource(&lightSource);
    std::cout << std::endl << " * Elementos adicionados ao mundo * " << std::endl;
    std::cout << std::endl << " * Iniciando geração * " << std::endl;
    renderer.render(world, "out.ppm");
    std::cout << std::endl << " * Resultado pronto. Imagem: out.ppm * " << std::endl;

    return 0;
}