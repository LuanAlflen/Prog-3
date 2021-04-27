#include <iostream>
#include "livro.h"

int main() {
    Livro *livro1 = new Livro("joao da silva", "livro do joao", "4-2-3-i");
    //std::cout << livro1->get_autor() << std::endl;

    std::cout << "autor:" << livro1->get_autor() <<std::endl;
    std::cout << "titulo:" << livro1->get_titulo() <<std::endl;
    std::cout << "isbn:" << livro1->get_isbn() <<std::endl;

    std::cout << std::endl;
    if(livro1->valida_string(livro1->get_autor())){
        std::cout << "autor validado" << std::endl;
    }else{
        std::cout << "autor nao validado" << std::endl;
    }

    if(livro1->valida_string(livro1->get_titulo())){
        std::cout << "titulo validado" << std::endl;
    }else{
        std::cout << "titulo nao validado" << std::endl;
    }

    if(livro1->valida_isbn(livro1->get_isbn())){
        std::cout << "isbn validado" << std::endl;
    }else{
        std::cout << "isbn nao validado" << std::endl;
    }

    return 0;
}