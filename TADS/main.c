#include <stdio.h>
#include "queue.h"


int main() {

    Queue *q = create_queue();

    if(is_empty_queue(q)) printf("Empty queue!\n");

    if(enqueue(q, 33)) {
        printf("Enfileirado!\n");
    }
    else {
        printf("Falha ao enfileirar!\n");
    }

    enqueue(q, 49);
    enqueue(q, 55);
    enqueue(q, 3);
    enqueue(q, 50);

    print_queue(q);

    dequeue(q);
    dequeue(q);
    print_queue(q);

    enqueue(q, 100);
    print_queue(q);

    printf("Tamanho da fila: %d\n", get_queue_size(q));
    return 0;
}