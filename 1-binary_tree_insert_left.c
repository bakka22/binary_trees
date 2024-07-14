#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert a node as a left child
 * @parent: parent of the child node
 * @value: value held in the node
 * Return: a pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left == NULL)
		parent->left = new;
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
	}

	return (new);
}
