#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <math.h>

size_t binary_tree_height3(const binary_tree_t *tree);
/**
 * binary_tree_leaves - count the number of leaves of a binary tree
 * @tree: the binary tree
 * Return: nothing
*/
size_t binary_tree_leaves2(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);
	count = 0;
	count += binary_tree_leaves2(tree->left);
	count += binary_tree_leaves2(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		count += 1;
	return (count);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the binary tree
 * Return: nothing
*/
int binary_tree_is_full(const binary_tree_t *tree)
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
size_t binary_tree_height3(const binary_tree_t *tree)
{
	size_t l, r, max;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	l = binary_tree_height3(tree->left);
	r = binary_tree_height3(tree->right);
	if (l > r)
		max = l;
	else
		max = r;
	return (max + 1);
}
