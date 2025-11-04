#ifndef _LISTA_H
#define _LISTA_H

#define MAX_LISTA 10

typedef int lst_info;
typedef struct {
    lst_info dados[MAX_LISTA];
    int qtd;
} lista;


void lst_init(lista *);
void lst_inserir(lista *, lst_info, int);
lst_info lst_remover(lista*, int);
lst_info lst_acessar(lista, int);
void lst_alterar(lista*, lst_info, int);

#endif // _LISTA_H
