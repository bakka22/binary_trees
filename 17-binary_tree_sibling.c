#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_sibling - check if the binary tree is full
 * @node: the binary tree
 * Return: nothing
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (0);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);

}
