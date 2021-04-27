//
// Created by Luan on 02/03/2021.
//
#include "funcoes.h"
#include <string>
namespace topico1{

    candidato criar_candidato(int num_incricao, int idade, int pontuacao, int curso_sugerido){
        topico1::candidato c;
        c.numero_inscricao = num_incricao;
        c.idade = idade;
        c.pontuacao = pontuacao;
        c.curso_pretendido = curso_sugerido;

        return c;
    }

    std::unique_ptr<candidato[]> gera_candidatos(int qtd_candidatos){
        std::default_random_engine engine( static_cast<unsigned int>(time(0)));
        std::uniform_int_distribution<unsigned int> random_idade( 18, 80 );
        std::uniform_int_distribution<unsigned int> random_pontuacao( 0, 5000 );
        std::uniform_int_distribution<unsigned int> random_curso( 1, 6);

        std::unique_ptr<topico1::candidato[]> c(new topico1::candidato[qtd_candidatos]());

        for (int i = 0; i < qtd_candidatos; ++i) {
            if(i < 120){
                c[i] = criar_candidato(i, random_idade(engine), random_pontuacao(engine), 1);
            }else if(120 <= i && i < 240){
                c[i] = criar_candidato(i, random_idade(engine), random_pontuacao(engine), 2);
            }else if(240 <= i && i < 360){
                c[i] = criar_candidato(i, random_idade(engine), random_pontuacao(engine), 3);
            }else if(360 <= i && i < 480){
                c[i] = criar_candidato(i, random_idade(engine), random_pontuacao(engine), 4);
            }else if(480 <= i && i < 600){
                c[i] = criar_candidato(i, random_idade(engine), random_pontuacao(engine), 5);
            }else if(600 <= i && i < 720){
                c[i] = criar_candidato(i, random_idade(engine), random_pontuacao(engine), 6);
            } else{
                c[i] = criar_candidato(i, random_idade(engine), random_pontuacao(engine), random_curso(engine));
            }

        }
        return c;
    }

}
