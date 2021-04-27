//
// Created by Luan on 16/03/2021.
//
#include <iostream>
#ifndef SEMANA3_EXERCICIO8_RETANGULO_H
#define SEMANA3_EXERCICIO8_RETANGULO_H

class retangulo{
public:

    //construtores
    retangulo();
    retangulo(float c, float l);
    //funcoes
    float calcula_area();
    float calcula_perimetro();

    //gets
    float get_comprimento();
    float get_largura();
    //sets
    void set_comprimento(float c);
    void set_largura(float l);
private:
    float comprimento_=0, largura_=0;   /* para que no caso da pessoa informar
                                        valores errados, eles estarem inicializados*/
};

#endif //SEMANA3_EXERCICIO8_RETANGULO_H
