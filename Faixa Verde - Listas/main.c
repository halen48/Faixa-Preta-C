#include "lista.h"

int main(){

    lista l;
    lst_init(&l);
    int i;

    for(i = 0; i < 10; i++){
        lst_inserir(&l, i, 0);
    }

    for(i = 0; i < 3; i++){
        lst_remover(&l, i);
    }

    return 0;

}
