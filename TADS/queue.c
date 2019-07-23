#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define QUEUE_MAX_SIZE 1000

typedef struct queue Queue;
typedef struct node Node;

struct node {
    int item;
    Node *next;
};

struct queue {
    int size;
    Node *head;
};

Node* create_node(int item) {
    Node *new_node = (Node*)malloc(sizeof(Node));
    new_node->item = item;
    new_node->next = NULL;
    return new_node;
}

Queue* create_queue() {
    Queue *new_queue = (Queue*)malloc(sizeof(Queue));
    new_queue->size = 0;
    new_queue->head = NULL;
    return new_queue;
}

bool is_empty_queue(Queue *q) {
    return (q->head == NULL) ? true : false;
}

bool enqueue(Queue *q, int item) {
    // caso a fila esteja cheia
    if(q->size == QUEUE_MAX_SIZE) {
        printf("Queue Overflow!\n");
        return false;
    }

    Node *new_node = create_node(item);
    // caso a fila esteja vazia
    if(is_empty_queue(q)) {
        new_node->next = q->head;
        q->head = new_node;
    }
    else {
        Node *current = q->head;
        while(current->next != NULL) {
            current = current->next;
        }

        new_node->next = current->next;
        current->next = new_node;
    }
    (q->size)++;
    return true;
}

void dequeue(Queue *q) {
    Node *aux = q->head;
    q->head = aux->next;
    aux->next = NULL;
    free(aux);
    (q->size)--;
}

int get_queue_size(Queue *q) {
    return q->size;
}

void print_queue(Queue *q) {
    Node *current = q->head;

    while(current != NULL) {
        printf("[%d]", current->item);

        if(current->next != NULL) {
            printf(" -> ");
        }

        current = current->next;
    }
    printf("\n");
}