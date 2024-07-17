#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_depth2 - measures the depth of a node in a binary tree
 * @tree: the node
 * Return: nothing
*/
size_t binary_tree_depth2(const binary_tree_t *tree)
{
	size_t p;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	p = binary_tree_depth2(tree->parent);
	return (p + 1);

}
#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: the first node
 * @second: the second node
 * Return: a pointer to the ancestor
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{

	size_t d1, d2;
	binary_tree_t *fir, *sec;

	if (first == NULL || second == NULL)
		return (NULL);
	d1 = binary_tree_depth2(first);
	d2 = binary_tree_depth2(second);

	fir = (binary_tree_t *)first;
	sec = (binary_tree_t *)second;
	while (d1 != d2)
	{
		if (d1 > d2)
		{
			fir = fir->parent;
			d1 -= 1;
		}
		else
		{
			sec = sec->parent;
			d2 -= 1;
		}
	}
	while (fir != sec)
	{
		fir = fir->parent;
		sec = sec->parent;
	}
	return (fir);
}
