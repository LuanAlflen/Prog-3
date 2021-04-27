#include <iostream>
#include <fstream>
#include "funcoes.h"
using std::cout;
using namespace topico1;

int main(){


    std::unique_ptr<candidato[]> c = ler_candidatos();

    std::unique_ptr<candidato[]> c_do_curso1_aprovados = lista_aprovados(1, c);
    std::unique_ptr<candidato[]> c_do_curso2_aprovados = lista_aprovados(2, c);
    std::unique_ptr<candidato[]> c_do_curso3_aprovados = lista_aprovados(3, c);
    std::unique_ptr<candidato[]> c_do_curso4_aprovados = lista_aprovados(4, c);
    std::unique_ptr<candidato[]> c_do_curso5_aprovados = lista_aprovados(5, c);
    std::unique_ptr<candidato[]> c_do_curso6_aprovados = lista_aprovados(6, c);

    imprime_lista_curso(c_do_curso1_aprovados, 40);
    imprime_lista_curso(c_do_curso2_aprovados, 40);
    imprime_lista_curso(c_do_curso3_aprovados, 40);
    imprime_lista_curso(c_do_curso4_aprovados, 40);
    imprime_lista_curso(c_do_curso5_aprovados, 40);
    imprime_lista_curso(c_do_curso6_aprovados, 40);


//    for (int i = 0; i < 40; ++i) {
//        //cout << "candidato " << i+1 << ":";
//        cout << "incricao: " << c_do_curso_aprovados[i].numero_inscricao;
//        cout << " idade: " << c_do_curso_aprovados[i].idade;
//        cout << " pontuacao: " << c_do_curso_aprovados[i].pontuacao;
//        //cout << " curso: " << c_do_curso_aprovados[i].curso_pretendido;
//        cout << "\n";
//    }

    /*
    for (int i = 0; i < NCANDIDATOS; ++i) {
        //cout << "candidato " << i+1 << ":";
        cout << "incricao: " << c[i].numero_inscricao;
        cout << " idade: " << c[i].idade;
        cout << " pontuacao: " << c[i].pontuacao;
        cout << " curso: " << c[i].curso_pretendido;
        cout << "\n";
    }*/

    return 0; // o finalizador se encarrega de fechar o arquivo
}