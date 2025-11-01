#ifndef CIRCULO_H_
#define CIRCULO_H_
#include "ponto.h"
#include <stdbool.h>

typedef struct{
    ponto centro;
    double raio;
} circulo;

void circ_init(circulo *, int, int, double);

double circ_area(circulo);

bool circ_contains(circulo, ponto);


#endif // CIRCULO_H_
