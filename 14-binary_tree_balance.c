#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
size_t binary_tree_height2(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the binary tree
 * Return: nothing
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l, r;
	int b_factor;

	if (tree == NULL)
		return (0);
	l = binary_tree_height2(tree->left);
	r = binary_tree_height2(tree->right);
	b_factor = (l - r);
	return (b_factor);
}

/**
 * binary_tree_height2 - measures the height of a binary tree
 * @tree: the binary tree
 * Return: nothing
*/
size_t binary_tree_height2(const binary_tree_t *tree)
{
	size_t l, r, max;

	if (tree == NULL)
		return (0);
	l = binary_tree_height2(tree->left);
	r = binary_tree_height2(tree->right);
	if (l > r)
		max = l;
	else
		max = r;
	return (max + 1);
}
