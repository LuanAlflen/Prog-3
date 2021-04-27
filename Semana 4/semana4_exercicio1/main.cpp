#include <iostream>
#include "time.h"

int main() {
    //tem q ter 6 inicializações com 6 construtores diferentes
    relogio::Time r0;
    r0.imprimir();


    relogio::Time r1(18, 54);
    r1.imprimir(false);

    relogio::Time r2(7199);
    r2.imprimir();
    r2.tick();
    r2.imprimir();

    relogio::Time r3(31.2);
    r3.imprimir();

    relogio::Time r4(r3);
    r3.imprimir(false);



    return 0;
}