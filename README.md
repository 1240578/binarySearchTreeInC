# Binary Search Tree

A small C implementation of a binary search tree. Each node stores an integer
and pointers to its left and right children. Smaller values go left; equal or
larger values go right. The tree tracks its root and number of nodes.

- `binary_tree.h`: structures and function declarations.
- `binary_tree.c`: tree creation, insertion, traversal, and lookup functions.
- `main.c`: example that creates a root of `0` and inserts `10` and `5`:

```text
0
 \
  10
 /
5
```

## Compile and run

With GCC installed, run these commands from this directory:

```sh
gcc -o main binary_tree.c main.c
./main
```

The example prints where the inserted values were placed and their lookup results.
