#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct node {
    struct node *left;
    struct node *right;
    int value;
} node;


typedef struct {
    node *root;
    int node_count;
} binary_tree;

binary_tree *init_binary_tree(int root_value);

node *get_left(node *current_node);

node *get_right(node *current_node);

node *traverse_tree(int value, node *current);

node *add(binary_tree *tree, int value);

node *fetch(binary_tree *tree, int value);

#endif