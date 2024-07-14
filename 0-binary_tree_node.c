#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_node - create a new node in a binary tree
 * @parent: the parent of the new node
 * @value: value contained in the node
 * Return: a pointer to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
