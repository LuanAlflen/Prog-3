//
// Created by Luan on 23/03/2021.
//

#include "time.h"

namespace relogio{
    //implementação dos construtores
    Time::Time(){
        hrs_ = 0;
        min_ = 0;
        seg_ = 0;
        std::cout << "Objeto inicializado" << std::endl;
    }

    Time::Time(int horas, int minutos){
        hrs_ = horas;
        min_ = minutos;
        seg_ = 0;
        std::cout << "Objeto inicializado" << std::endl;
    }
    Time::~Time() {
        std::cout << "Objeto destruido" << std::endl;
    }

    Time::Time(int segundos) {
        if(segundos >=60){
            seg_ = segundos%60;
            int minutos = segundos/60;
            if(minutos >= 60){
                min_ = minutos%60;
                int horas = minutos/60;
                if(horas >= 24){
                   hrs_ = horas/24;
                }else{
                    hrs_ = horas;
                }
            }else{
                min_ = minutos;
                hrs_ = 0;
            }
        }else{
            seg_ = segundos;
            min_ = 0;
            hrs_ = 0;
        }
        std::cout << "Objeto inicializado" << std::endl;
    }

    Time::Time(const Time &copia){
        this->hrs_ = copia.hrs_;
        this->min_ = copia.min_;
        this->seg_ = copia.seg_;
        std::cout << "Objeto copiado" << std::endl;
    }

    Time::Time(double horas) {
        int total = (int)(horas*3600);
        int horas_ = total/3600;
        int resto = total % 3600;
        int minutos_ = resto /60;
        int segundos_ = resto % 60;
        while (horas_ >= 24){
            horas_ -= 24;
        }
        hrs_ = horas_;
        min_ = minutos_;
        seg_ = segundos_;

    }

    // implementação gets
    int Time::get_hrs() {
        return hrs_;
    }

    int Time::get_min() {
        return min_;
    }

    int Time::get_seg() {
        return seg_;
    }
    // implementação sets
    void Time::set_hrs(int nova_hora) {
        if(nova_hora >= 24 || nova_hora < 0){
            std::cout << "Digite valores entre 0 e 23!" << std::endl;
        }else{
            hrs_ = nova_hora;
        }
    }

    void Time::set_min(int novo_minuto) {
        if(novo_minuto >= 60 || novo_minuto < 0){
            std::cout << "Digite valores entre 0 e 59!" << std::endl;
        }else{
            min_ = novo_minuto;
        }
    }

    void Time::set_seg(int novo_segundo) {
        if(novo_segundo >= 60 || novo_segundo < 0){
            std::cout << "Digite valores entre 0 e 59!" << std::endl;
        }else{
            seg_ = novo_segundo;
        }
    }
    //implementações das funções
    void Time::tick() {
        if(seg_ >= 59){
            seg_ = 0;
            if (min_ >= 59){
                min_ = 0;
                if(hrs_ >= 23){
                    hrs_ = 0;
                }else{
                    hrs_++;
                }
            }else{
                min_++;
            }
        }else{
            seg_++;
        }
    }

    //parametro == false vai imprimir com AM ou PM
    void Time::imprimir(bool normal) {
        if(normal){
            std::cout   << std::setfill('0') << std::setw(2) << get_hrs() << ":"
                        << std::setfill('0') << std::setw(2) << get_min() << ":"
                        << std::setfill('0') << std::setw(2) << get_seg()
                        << std::endl;
        }else{
            if(get_hrs() >= 0 && get_hrs() <= 11){
                std::cout   << std::setfill('0') << std::setw(2) << get_hrs() << ":"
                            << std::setfill('0') << std::setw(2) << get_min() << ":"
                            << std::setfill('0') << std::setw(2) << get_seg() << " AM"
                            << std::endl;
            }else{
                if(get_hrs()-12 == 0){
                    std::cout   << std::setfill('0') << std::setw(2) << get_hrs() << ":"
                                << std::setfill('0') << std::setw(2) << get_min() << ":"
                                << std::setfill('0') << std::setw(2) << get_seg() << " PM"
                                << std::endl;
                }else{
                    std::cout   << std::setfill('0') << std::setw(2) << get_hrs()-12 << ":"
                                << std::setfill('0') << std::setw(2) << get_min() << ":"
                                << std::setfill('0') << std::setw(2) << get_seg() << " PM"
                                << std::endl;
                }
            }
        }
    }
}
