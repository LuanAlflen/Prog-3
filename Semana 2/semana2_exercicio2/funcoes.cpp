//
// Created by Luan on 04/03/2021.
//

#include "funcoes.h"
#include <string>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <fstream>

using std::cout;

namespace topico1 {

    /*candidato criar_candidato(int num_incricao, int idade, int pontuacao, int curso_sugerido) {
        topico1::candidato c;
        c.numero_inscricao = num_incricao;
        c.idade = idade;
        c.pontuacao = pontuacao;
        c.curso_pretendido = curso_sugerido;

        return c;
    }*/

    std::unique_ptr<candidato[]> ler_candidatos(){
        std::unique_ptr<topico1::candidato[]> c(new topico1::candidato[NCANDIDATOS]());
        std::ifstream inFile; // inFile é o arquivo de leitura dos dados
        int i=0;
        inFile.open("dados.txt", std::ios::in); // abre o arquivo para leitura

        if (! inFile){
            cout << "Arquivo dados.txt nao pode ser aberto" << std::endl;
            abort();
        }

        inFile >> c[i].numero_inscricao >> c[i].idade >> c[i].pontuacao >> c[i].curso_pretendido;

        while(!inFile.eof() && c[i].numero_inscricao != -999){
            i++;
            inFile >> c[i].numero_inscricao >> c[i].idade >> c[i].pontuacao >> c[i].curso_pretendido; // ler próximo registro
        }

        inFile.close();

        return c;
    }

    std::unique_ptr<candidato[]> lista_aprovados(int curso, std::unique_ptr<candidato[]> &c){
        std::unique_ptr<topico1::candidato[]> c_curso(new candidato[NCANDIDATOS]());
        std::unique_ptr<topico1::candidato[]> c_aprovados(new candidato[40]());
        int tam_curso=0;

        //separando no vetor c_curso só os candidatos do "int curso"
        for (int i = 0; i < NCANDIDATOS; ++i) {
            if(c[i].curso_pretendido == curso){
                c_curso[tam_curso] = c[i];
                tam_curso++;
            }
        }
        // tam_curso é o tamanho de candidatos inscritos no curso

        //ordenando por pontuacao (maior pro menor)
        candidato maior_nota;
        for (int i = 0; i < tam_curso; ++i) {
            for (int k = 0; k < tam_curso; ++k) {
                if(c_curso[i].pontuacao > c_curso[k].pontuacao){
                    maior_nota = c_curso[i];
                    c_curso[i] = c_curso[k];
                    c_curso[k] = maior_nota;
                }
            }
        }

        //ordenando por idade, dado q esta ordenado em pontuacao
        candidato maior_idade;
        int ta_errado=1;

        while (ta_errado > 0){
            ta_errado=0;
            for (int i = 0; i < tam_curso-1; ++i) {
                if(c_curso[i].pontuacao == c_curso[i+1].pontuacao)
                    if(c_curso[i+1].idade > c_curso[i].idade){
                        maior_idade = c_curso[i+1];
                        c_curso[i+1] = c_curso[i];
                        c_curso[i] = maior_idade;
                        ta_errado++;
                    }
            }
        }


        //pegando só os 40 primeiros (os aprovados)
        for (int i = 0; i < 40; ++i) {
            c_aprovados[i] = c_curso[i];
        }

        return c_aprovados;
    }

    void imprime_lista_curso (std::unique_ptr<candidato[]> &c, int tam){

        cout << "No Curso " << c[0].curso_pretendido << ":\n";
        for (int i = 0; i < tam; ++i) {
            //cout << "candidato " << i+1 << ":";
            cout << "  incricao: " << c[i].numero_inscricao;
            cout << " idade: " << c[i].idade;
            cout << " pontuacao: " << c[i].pontuacao;
            //cout << " curso: " << c_do_curso_aprovados[i].curso_pretendido;
            cout << "\n";
        }
        cout << "\n";
    }

}

//        Tipo
//        Pontuacao 3458
//        Idade 32
//        3458 + ( 32 * 0.01) = 3458.32