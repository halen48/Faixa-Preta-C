#ifndef _FILA_H
#define _FILA_H
#include <stdbool.h>

#define MAX_QUEUE 10

typedef int queue_info;
typedef struct{
    queue_info dados[MAX_QUEUE];
    int comeco, fim, qtd_elementos;
}fila;

void queue_init(fila *);
void enqueue(fila *, queue_info);
queue_info dequeue(fila *);
bool queue_isempty(fila);
bool queue_isfull(fila);
void print_queue(fila);

#endif // _FILA_H
