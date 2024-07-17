#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

size_t binary_tree_height3(const binary_tree_t *tree);
/**
 * binary_tree_leaves2 - count the number of leaves of a binary tree
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
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: the binary tree
 * Return: nothing
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, leaves, res;
	int i;

	if (tree == NULL)
		return (0);
	res = 1;
	height = binary_tree_height3(tree);
	leaves = binary_tree_leaves2(tree);
	for (i = 0; i < (int)height; i++)
	{
		res *= 2;
	}
	if (leaves == res)
		return (1);
	return (0);
}

/**
 * binary_tree_height3 - measures the height of a binary tree
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
