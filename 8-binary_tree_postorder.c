#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_postorder - traverse a tree postorder
 * @tree: the binary tree
 * @func: the function to call on the node
 * Return: nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
