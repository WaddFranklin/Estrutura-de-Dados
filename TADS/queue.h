
#ifndef TADS_QUEUE_H
#define TADS_QUEUE_H

#include <stdbool.h>
typedef struct node Node;
typedef struct queue Queue;

Node* create_node(int item);

Queue* create_queue();

bool is_empty_queue(Queue *q);

bool enqueue(Queue *q, int item);

void dequeue(Queue *q);

int get_queue_size(Queue *q);

void print_queue(Queue *q);

#endif //TADS_QUEUE_H
