#include "graph.h"
#include <stdio.h>

int main() {

    int num_vertexes, num_edges;
    scanf("%d %d", &num_vertexes, &num_edges);
    getchar();

    Graph *g = construct_graph(num_vertexes, num_edges);
    print_graph(g, num_vertexes);
    dfs(g, 0);

    /* --- tree test ---
    BTree *bt = create_empty_btree();
    char* str = read_parenthesis_btree();
    int i = 0;

    puts(str);
    bt = construct_btree(str, &i);
    print_pre_order(bt); printf("\n");
    print_in_order(bt); printf("\n");
    print_post_order(bt); printf("\n");
    generate_parenthesis_btree(bt);
    */

    return 0;
}