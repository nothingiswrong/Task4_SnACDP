#include <malloc.h>
#include "string.h"


typedef struct tree_node {
	struct tree_node *parent;
	struct tree_node *left;
	struct tree_node *right;
	string value;	
} node;

typedef struct avl_tree {
	node root;
	int size;
} tree;

void tree_add(tree *tree, string str) {	

}


