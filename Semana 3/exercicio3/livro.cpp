//
// Created by Luan on 15/03/2021.
//

#include "livro.h"

Livro::Livro(std::string o_titulo, std::string o_autor, std::string o_isbn, int genero) {
    titulo_ = o_titulo;
    autor_ = o_autor;
    isbn_ = o_isbn;
    if(genero == 1){
        genero_ = Genero::ficcao;
    }else if(genero == 2){
        genero_ = Genero::nao_ficcao;
    }else if(genero == 3){
        genero_ = Genero::periodico;
    }else if(genero == 4){
        genero_ = Genero::biografia;
    }else if(genero == 5){
        genero_ = Genero::infantil;
    }else{
        genero_ = Genero::sem_genero;
    }
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

Livro::Genero Livro::get_genero(){
    return genero_;
}

std::string Livro::get_string_genero(){
    if(this->genero_ == Livro::Genero::ficcao){
        return "ficcao";
    }else if(this->genero_ == Livro::Genero::nao_ficcao){
        return "nao_ficcao";
    }else if(this->genero_ == Livro::Genero::periodico){
        return "periodico";
    }else if(this->genero_ == Livro::Genero::biografia){
        return "biografia";
    }else if(this->genero_ == Livro::Genero::infantil){
        return "infantil";
    }else if(this->genero_ == Livro::Genero::sem_genero){
        return "sem_genero";
    }
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

void Livro::set_genero(int novo_genero){
    if(novo_genero == 1){
        genero_ = Genero::ficcao;
    }else if(novo_genero == 2){
        genero_ = Genero::nao_ficcao;
    }else if(novo_genero == 3){
        genero_ = Genero::periodico;
    }else if(novo_genero == 4){
        genero_ = Genero::biografia;
    }else if(novo_genero == 5){
        genero_ = Genero::infantil;
    }
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