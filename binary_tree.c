#include <stdlib.h>
#include "binary_tree.h"

binary_tree *init_binary_tree(int root_value) {
    binary_tree *new_binary_tree = (binary_tree*)malloc(sizeof(binary_tree));
    node *root = (node*)malloc(sizeof(node));
    root->value = root_value;
    root->left = NULL;
    root->right = NULL;
    new_binary_tree->root = root;
    new_binary_tree->node_count = 1;
    return new_binary_tree;
}

node *get_left(node *current_node) {
    return current_node->left;
}

node *get_right(node *current_node) {
    return current_node->right;
}


node *traverse_tree(int value, node *current) {
    node *next;
    if(value<current->value) {
        next = current->left;
    }
    else next = current->right;
    if(next==NULL) {
        return current;
    }
    return traverse_tree(value, next);
}

node *add(binary_tree *tree, int value) {
    node *current = tree->root;
    node *parent = traverse_tree(value, current);
    node *new_node = (node*)malloc(sizeof(node));
    new_node->value = value;
    new_node->left = NULL;
    new_node->right = NULL;
    if(new_node->value<parent->value) {
        parent->left = new_node;
    } else parent->right = new_node;
    ++tree->node_count;
    return new_node;
}

node *fetch(binary_tree *tree, int value) {
    node *current = tree->root;
    node *parent = traverse_tree(value, current);
    if(parent->value==value){
        return parent;
    }
    return NULL;
}