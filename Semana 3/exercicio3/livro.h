//
// Created by Luan on 15/03/2021.
//

#include <iostream>
#ifndef SEMANA3_EXERCICIO2_LIVRO_H

#define SEMANA3_EXERCICIO2_LIVRO_H

class Livro{


public:
    enum class Genero{
        ficcao, nao_ficcao, periodico, biografia, infantil, sem_genero
    };
        Livro(std::string o_titulo, std::string o_autor, std::string o_isbn, int genero); /*construtor padrão explícito*/
        bool valida_isbn(std::string isnb);
        bool valida_string(std::string frase); //vale tanto pro autor como pro titulo

        //gets
        std::string get_titulo();
        std::string get_autor();
        std::string get_isbn();
        Livro::Genero get_genero();
        std::string get_string_genero();

        //set
        void set_autor(std::string novo_autor);
        void set_titulo(std::string novo_titulo);
        void set_isbn(std::string novo_isbn);
        void set_genero(int novo_genero);

private:
        std::string titulo_, autor_, isbn_;
        Genero genero_;


};

#endif //SEMANA3_EXERCICIO2_LIVRO_H
