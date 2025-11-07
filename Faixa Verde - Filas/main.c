#include <stdio.h>
#include "fila.h"

int main(){
    fila f;
    queue_init(&f);
    int i;
    for(i = 0; i < 10; i++){
        enqueue(&f, i);
    }
    print_queue(f);
    queue_info v;
    for(i = 0;  i < 3; i++){
        v = dequeue(&f);
    }
    print_queue(f);

    return 0;
}
