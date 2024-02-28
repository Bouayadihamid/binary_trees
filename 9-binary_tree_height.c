#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a BT
 *
 * @tree: ptr to the root node of the tree to measure the height
 * Return: return the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	return ((left > right) ? left : right);
}
