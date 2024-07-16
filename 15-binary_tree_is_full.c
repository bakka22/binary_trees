#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_is_full - check if the binary tree is full
 * @tree: the binary tree
 * Return: nothing
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r, t;

	if (tree == NULL)
		return (0);
	l = 1;
	r = 1;
	if (tree->left != NULL)
		l = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		r = binary_tree_is_full(tree->right);
	t = l & r;
	if (tree->left == NULL && tree->right == NULL)
		return (1 & t);
	else if (tree->left != NULL && tree->right != NULL)
		return (1 & t);
	else
		return (0);
}
