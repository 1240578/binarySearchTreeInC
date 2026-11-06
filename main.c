#include <stdio.h>
#include "binary_tree.h"


int main(void) {
    // Initiate the binary tree with a root value of 0
    binary_tree *tree = init_binary_tree(0);
    // add the value 10
    add(tree, 10);
    //Check if the node went to the right
    if(tree->root->left!=NULL) {
        printf("its on the left\n");
    } else if(tree->root->right!=NULL) {
        printf("its on the right: %d\n", tree->root->right->value);
    }
    // fetch the value
    node *find = fetch(tree, 10);
    if(find!=NULL)  {
        printf("%d\n",find->value);
    } else printf("fetch not working\n");
    // add a value to go left of ten
    add(tree, 5);
    //check if it went to the left
    if(tree->root->right->left!=NULL) {
        printf("Its on the left: %d\n", tree->root->right->left->value);
    } else if(tree->root->right->right!=NULL) {
        printf("Its on the right\n");
    }
    // fetch it from the tree
    find = fetch(tree, 5);
    if(find!=NULL)  {
        printf("%d\n",find->value);
    } else printf("fetch not working\n");

    return 0;
}