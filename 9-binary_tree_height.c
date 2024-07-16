#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the binary tree
 * Return: nothing
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r, max;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l > r)
		max = l;
	else
		max = r;
	return (max + 1);
}
