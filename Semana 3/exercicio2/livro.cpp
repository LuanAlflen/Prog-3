//
// Created by Luan on 15/03/2021.
//

#include "livro.h"

Livro::Livro(std::string o_titulo, std::string o_autor, std::string o_isbn) {
    titulo_ = o_titulo;
    autor_ = o_autor;
    isbn_ = o_isbn;
}

std::string Livro::get_autor() {
    return autor_;
}

std::string Livro::get_titulo(){
    return titulo_;
}

std::string Livro::get_isbn(){
    return isbn_;
}

void Livro::set_autor(std::string novo_autor){
    autor_ = novo_autor;
}

void Livro::set_titulo(std::string novo_titulo){
    titulo_ = novo_titulo;
}

void Livro::set_isbn(std::string novo_isbn){
    isbn_ = novo_isbn;
}


bool Livro::valida_string(std::string frase){
    int i=0;
    while (frase[i] != '\0'){
        //verificando se todos os caracteres são letras (maiusculas e minusculas) ou espaço
        if(!(frase[i] <= 90 && frase[i] >= 65) && !(frase[i] <= 122 && frase[i] >= 97) && (frase[i] != 32)){
            return false;
        }
        i++;
    }
    return true;
}

bool  Livro::valida_isbn(std::string isbn){
    int i=0;
    while (isbn[i] != '\0'){

        //verificando se é numero
        if(i == 0 || i == 2 || i == 4){
            if(!(isbn[i] <= 57 && isbn[i] >= 48)){
                return false;
            }
        }
        //verficando se tem barra
        if(i == 1 || i == 3 || i == 5){
            if(isbn[i] != '-'){
                return false;
            }
        }
        //verificando se o caractere é letra (maiusculas e minusculas)
        if(i == 6){
            if(!(isbn[i] <= 90 && isbn[i] >= 65) && !(isbn[i] <= 122 && isbn[i] >= 97)){
                return false;
            }
        }
        i++;

    }
    return true;
}