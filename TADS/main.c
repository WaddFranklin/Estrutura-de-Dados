#include "tree.h"
#include <stdio.h>

int main() {

    BTree *bt = create_empty_btree();
    char* str = read_parenthesis_btree();
    int i = 0;

    puts(str);
    bt = construct_btree(str, &i);
    print_pre_order(bt); printf("\n");
    print_in_order(bt); printf("\n");
    print_post_order(bt); printf("\n");
    generate_parenthesis_btree(bt);

    return 0;
}