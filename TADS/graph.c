//
// Created by franklin on 21/06/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct adj_list AdjList;
typedef struct graph Graph;

#define DIRECTED true
#define UNDIRECTED false

struct adj_list {
    int item;
    AdjList *next;
};

struct graph {
    AdjList **vertexes;
    bool *visited;
};

Graph* create_graph(int num_vertexes) {
    Graph *new_graph = (Graph*)malloc(sizeof(Graph));
    new_graph->vertexes = (AdjList**)malloc(num_vertexes * sizeof(AdjList*));
    new_graph->visited = (bool*)malloc(num_vertexes * sizeof(bool));

    int i;
    for(i = 0 ; i < num_vertexes ; i++) {
        new_graph->vertexes[i] = (AdjList*)malloc(num_vertexes * sizeof(AdjList));
        new_graph->vertexes[i] = NULL;
        new_graph->visited[i] = false;
    }

    return new_graph;
}

AdjList* create_adj_list(int item) {
    AdjList *new_adj_list = (AdjList*)malloc(sizeof(AdjList));
    new_adj_list->item = item;
    new_adj_list->next = NULL;
    return new_adj_list;
}

void add_edge(Graph *g, int vertex1, int vertex2, bool directed) {
    AdjList *vertex = create_adj_list(vertex2);
    vertex->next = g->vertexes[vertex1];
    g->vertexes[vertex1] = vertex;

    if(!directed) {
        vertex = create_adj_list(vertex1);
        vertex->next = g->vertexes[vertex2];
        g->vertexes[vertex2] = vertex;
    }
}

Graph* construct_graph(int num_vertexes, int num_edges) {
    int i;
    int vertex1, vertex2;

    Graph *g = create_graph(num_vertexes);
    for(i = 0 ; i < num_edges ; i++) {
        scanf("%d %d", &vertex1, &vertex2);
        getchar();

        add_edge(g, vertex1, vertex2, DIRECTED);
    }

    return g;
}

void dfs(Graph *g, int start) {
    g->visited[start] = true;
    printf("%d ", start);

    AdjList *vertex = g->vertexes[start];
    while(vertex != NULL) {
        if(!g->visited[vertex->item]) {
            dfs(g, vertex->item);
        }
        vertex = vertex->next;
    }
}

void print_graph(Graph *g, int num_vertexes) {
    int i;
    AdjList *current = NULL;

    for(i = 0 ; i < num_vertexes ; i++) {
        if(g->visited[i]) {
            printf("[visited] ");
        }
        else {
            printf("[not visited] ");
        }
        printf("%d -> ", i);

        current = g->vertexes[i];
        while(current != NULL) {
            if(current->next != NULL) {
                printf("[%d] -> ", current->item);
            }
            else {
                printf("[%d]", current->item);
            }

            current = current->next;
        }
        printf("\n");
    }
}