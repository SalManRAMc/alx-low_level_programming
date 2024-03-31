#include "binary_trees.h"

/**
* binary_tree_node - creates a binary tree node
*
*
*
*
*
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t* newtreenode;

	newtreenode = (binary_tree_t*) malloc(sizeof(binary_tree_t));

	if (!newtreenode)
	{
		return (NULL);
	}
	else
	{
		newtreenode->n = value;
		newtreenode->left = NULL;
		newtreenode->right = NULL;
		newtreenode->parent = NULL;	
	}
	return (newtreenode);
}
