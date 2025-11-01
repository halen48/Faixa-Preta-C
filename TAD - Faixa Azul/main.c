#include <stdio.h>
#include "circulo.h"

int main(){

    circulo c;
    ponto p;

    circ_init(&c, 0,0,5);
    pto_init(&p, 3, 3);

    if(circ_contains(c, p)){
        printf("Arcertou o alvo!");
    } else {
        printf("Miss!!");
    }

    return 0;
}
