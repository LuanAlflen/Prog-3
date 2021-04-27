#include <iostream>
#include <fstream>
#include "funcoes.h"
using std::cout;
using namespace topico1;

int main() {


    std::ofstream outFile; // outFile é o arquivo onde a saída será escrita

    outFile.open("dados.txt", std::ios::out); // abre o arquivo para escrita
    if (! outFile)
        { cout << "Arquivo dados.txt nao pode ser aberto" << std::endl;
        abort();
        }

    //std::unique_ptr<topico1::candidato[]> c(new topico1::gera_candidatos(NCANDIDATOS));
    auto c = gera_candidatos(NCANDIDATOS);

    c[NCANDIDATOS-1].numero_inscricao = -999;
    c[NCANDIDATOS-1].idade = -999;
    c[NCANDIDATOS-1].pontuacao = -999;
    c[NCANDIDATOS-1].curso_pretendido = -999;

    int i=0;
    while(i!=NCANDIDATOS){
        outFile << c[i].numero_inscricao << " ";
        outFile << c[i].idade << " ";
        outFile << c[i].pontuacao << " ";
        outFile << c[i].curso_pretendido << "\n";
        i++;
    }

    outFile.close();

    return 0;
}