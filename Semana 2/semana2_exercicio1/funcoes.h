//
// Created by Luan on 02/03/2021.
//
#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>

#ifndef PROG3_FUNCOES_H
#define PROG3_FUNCOES_H

namespace topico1{

    struct candidato{
        int numero_inscricao;
        int idade;
        int pontuacao;
        int curso_pretendido;
        //~candidato(){std::cout << "Fim:"<<numero_inscricao;}
    };

    const int NCANDIDATOS = 827;

    candidato criar_candidato(int num_incricao, int idade, int pontuacao, int curso_sugerido);

    std::unique_ptr<candidato[]> gera_candidatos(int qtd_candidatos);
}

#endif //PROG3_FUNCOES_H
