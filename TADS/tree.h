//
// Created by franklin on 03/06/19.
//

#ifndef TADS_TREE_H
#define TADS_TREE_H

#include <stdbool.h>
typedef struct btree BTree;

BTree* create_empty_btree();

BTree* create_btree(int item, BTree *left, BTree *right);

bool is_empty(BTree *bt);

BTree* search(BTree *bt, int item);

BTree* bst_add(BTree *bt, int item);

char* read_parenthesis_btree();

void generate_parenthesis_btree(BTree *bt);

BTree* construct_btree(char* str, int *i);

void print_pre_order(BTree *bt);

void print_in_order(BTree *bt);

void print_post_order(BTree *bt);

#endif //TADS_TREE_H
