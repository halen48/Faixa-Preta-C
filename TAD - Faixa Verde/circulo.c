#include "circulo.h"
#include <math.h>

void circ_init(circulo * c, int x, int y, double r){
    c->centro.x = x;
    c->centro.y = y;
    c->raio = r;

}

double circ_area(circulo c){
    return M_PI*c.raio*c.raio;
}

bool circ_contains(circulo c, ponto p){
    return pto_distance(c.centro, p) <= c.raio;
}
