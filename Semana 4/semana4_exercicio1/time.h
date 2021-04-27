//
// Created by Luan on 23/03/2021.
//
#include <iostream>
#include <iomanip>

#ifndef SEMANA4_EXERCICIO1_TIME_H
#define SEMANA4_EXERCICIO1_TIME_H
namespace relogio {

    class Time {
    public:
        //construtores
        Time();/*construtor padrão (seta tudo com zero)*/
        Time(int horas, int minutos); /*2 parametros*/
        ~Time();
        explicit Time(int segundos);
        Time(const Time &copia);
        explicit Time(double horas);

        //gets
        int get_hrs();
        int get_min();
        int get_seg();

        //sets
        void set_hrs(int nova_hora);
        void set_min(int novo_minuto);
        void set_seg(int novo_segundo);

        //funções
        void tick();
        void imprimir(bool normal=true);
    private:
        int hrs_, min_, seg_;
    };

}
#endif //SEMANA4_EXERCICIO1_TIME_H
