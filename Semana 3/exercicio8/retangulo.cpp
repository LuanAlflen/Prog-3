//
// Created by Luan on 16/03/2021.
//
#include "retangulo.h"

retangulo::retangulo(){
    set_largura(10.0);
    set_comprimento(10.0);
}

retangulo::retangulo(float c, float l) {
    set_comprimento(c);
    set_largura(l);
}

float retangulo::calcula_area(){
    return this->largura_*this->comprimento_;
}

float retangulo::calcula_perimetro(){
    return 2*(this->comprimento_)+2*(this->largura_);
}

float retangulo::get_comprimento() {
    return comprimento_;
}

float retangulo::get_largura() {
    return largura_;
}

void retangulo::set_comprimento(float c) {
    if(c < 0.0 || c > 20.0){
        std::cout << "informe valores de comprimento entre 0.0 e 20.0!" << std::endl;
    }else{
        comprimento_ = c;
    }
}

void retangulo::set_largura(float l) {
    if(l < 0.0 || l > 20.0){
        std::cout << "informe valores de largura entre 0.0 e 20.0!" << std::endl;
    }else {
        largura_ = l;
    }
}