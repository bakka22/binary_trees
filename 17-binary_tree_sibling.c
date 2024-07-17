#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_sibling - check if the binary tree is full
 * @tree: the binary tree
 * Return: nothing
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (tree == NULL || tree->parent == NULL)
		return (0);
	if (tree == tree->parent->left)
		return (tree->parent->right);
	return (tree->parent->left);

}
