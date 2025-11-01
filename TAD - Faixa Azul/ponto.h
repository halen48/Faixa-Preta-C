#ifndef _PONTO_H
#define _PONTO_H

typedef struct{
    int x, y;
} ponto;

void pto_init(ponto *, int, int);
double pto_distance(ponto, ponto);

#endif // _PONTO_H
