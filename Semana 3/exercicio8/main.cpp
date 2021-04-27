#include <iostream>
#include "retangulo.h"
int main() {
    retangulo *r1 = new retangulo();
    std::cout << "r1:"<<std::endl;
    std::cout << "comprimento: " << r1->get_comprimento() <<std::endl;
    std::cout << "largura: " << r1->get_largura() <<std::endl;
    std::cout << "area: " << r1->calcula_area() <<std::endl;
    std::cout << "perimetro: " << r1->calcula_perimetro() <<std::endl;
    std::cout << std::endl;
    retangulo *r2 = new retangulo(22.0, 4.0);
    std::cout << "r2:"<<std::endl;
    std::cout << "comprimento: " << r2->get_comprimento() <<std::endl;
    std::cout << "largura: " << r2->get_largura() <<std::endl;
    std::cout << "area: " << r2->calcula_area() <<std::endl;
    std::cout << "perimetro: " << r2->calcula_perimetro() <<std::endl;
    return 0;
}