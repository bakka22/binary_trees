#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_leaves - count the number of leaves of a binary tree
 * @tree: the binary tree
 * Return: nothing
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = 0;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		count += 1;
	return (count);
}
