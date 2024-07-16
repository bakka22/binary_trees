#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_preorder - delete a binary tree
 * @tree: the binary tree
 * @func: the function to call on the node
 * Return: nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
