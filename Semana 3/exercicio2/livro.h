//
// Created by Luan on 15/03/2021.
//

#include <iostream>
#ifndef SEMANA3_EXERCICIO3_LIVRO_H

#define SEMANA3_EXERCICIO3_LIVRO_H

class Livro{
public:
    Livro(std::string o_titulo, std::string o_autor, std::string o_isbn); /*construtor padrão explícito*/
    bool valida_isbn(std::string isnb);
    bool valida_string(std::string frase); //vale tanto pro autor como pro titulo

    //gets
    std::string get_titulo();
    std::string get_autor();
    std::string get_isbn();

    //set
    void set_autor(std::string novo_autor);
    void set_titulo(std::string novo_titulo);
    void set_isbn(std::string novo_isbn);

private:
    std::string titulo_, autor_, isbn_;
};

#endif //SEMANA3_EXERCICIO2_LIVRO_H
