//
// Created by franklin on 21/06/19.
//

#ifndef TADS_GRAPH_H
#define TADS_GRAPH_H

#include <stdbool.h>
typedef struct graph Graph;
typedef struct adj_list AdjList;

Graph* create_graph(int num_vertexes);

AdjList* create_adj_list(int item);

AdjList* remove_adj_list(AdjList *head, int item);

void add_edge(Graph *g, int vertex1, int vertex2, bool directed);

Graph* construct_graph(int num_vertexes, int num_edges);

void dfs(Graph *g, int start);

void remove_vertex(Graph *g, int vertex);

void reset_visited(Graph *g);

bool is_connected(Graph *g);

void print_graph(Graph *g);

#endif //TADS_GRAPH_H
