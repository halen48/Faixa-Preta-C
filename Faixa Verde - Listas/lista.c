#include "lista.h"

void lst_init(lista * l){
    l->qtd = 0;
}

void lst_inserir(lista * l, lst_info val, int k){
    int i;
    for(i = l->qtd-1; i >= k; i--){
        l->dados[i+1] = l->dados[i];
    }

    l->dados[k] = val;
    l->qtd++;
}

lst_info lst_remover(lista* l, int k){
    lst_info ret = l->dados[k];
    l->qtd--;
    int i;
    for(i = k; i < l->qtd; i++){
        l->dados[i] = l->dados[i+1];
    }
    return ret;
}

lst_info lst_acessar(lista l, int k){
    return l.dados[k];
}

void lst_alterar(lista* l, lst_info val, int k){
    l->dados[k] = val;
}
