#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_nodes- count the number of nodes with at least 1 child
 * @tree: the binary tree
 * Return: nothing
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = 0;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		count += 1;
	return (count);
}
