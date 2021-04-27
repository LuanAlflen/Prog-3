//
// Created by Luan on 04/03/2021.
//
#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>

#ifndef SEMANA2_EXERCICIO2_FUNCOES_H
#define SEMANA2_EXERCICIO2_FUNCOES_H

namespace topico1{

    struct candidato{
        int numero_inscricao;
        int idade;
        int pontuacao;
        int curso_pretendido;
        //~candidato(){std::cout << "Fim:"<<numero_inscricao;}
    };

    const int NCANDIDATOS = 827;

    std::unique_ptr<candidato[]> ler_candidatos();

    std::unique_ptr<candidato[]> lista_aprovados(int curso, std::unique_ptr<candidato[]> &c);

    void imprime_lista_curso (std::unique_ptr<candidato[]> &c, int tam);
}

#endif //SEMANA2_EXERCICIO2_FUNCOES_H
