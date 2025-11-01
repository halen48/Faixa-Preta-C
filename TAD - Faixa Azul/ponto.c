#include "ponto.h"
#include <math.h>

void pto_init(ponto * p, int x, int y){
    p->x = x;
    p->y = y;
}

double pto_distance(ponto p1, ponto p2){
    int dx = p1.x - p2.x;
    int dy = p1.y - p2.y;

    return sqrt(dx*dx + dy*dy);

}
