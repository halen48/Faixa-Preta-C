#include "fila.h"
#include <stdio.h>

void queue_init(fila * f){
    f->qtd_elementos = f->comeco = f->fim = 0;
}
void enqueue(fila * f, queue_info val){
    f->dados[f->fim] = val;
    f->fim = (f->fim + 1)%MAX_QUEUE;
    f->qtd_elementos++;
}
queue_info dequeue(fila * f){
    queue_info ret = f->dados[f->comeco];
    f->comeco = (f->comeco+1)%MAX_QUEUE;
    f->qtd_elementos--;
    return ret;
}
bool queue_isempty(fila f){
    return f.qtd_elementos == 0;
}
bool queue_isfull(fila f){
    return f.qtd_elementos == MAX_QUEUE;
}

void print_queue(fila f){
    int i = f.comeco, j;
    for(j = 0; j < f.qtd_elementos; j++){
        printf("[%d]", f.dados[i]);
        i = (i+1)%MAX_QUEUE;
    }
    printf("\n");
}
