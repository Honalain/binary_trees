#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function that create bionary tree
 * @parent: pointer to the parent node of the node to create
 * @value: Value to put in the new node
 * Return: return a pointer to the new node or null if failure
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root_node = malloc(sizeof(binary_tree_t));

	if (!root_node)
		return (NULL);

	root_node->n = value;
	root_node->parent = parent;
	root_node->left = NULL;
	root_node->right = NULL;

	return (root_node);
}
