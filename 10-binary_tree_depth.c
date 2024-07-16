#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: the node
 * Return: nothing
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t p;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	p = binary_tree_depth(tree->parent);
	return (p + 1);

}
