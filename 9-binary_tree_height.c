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
	size_t x, y;

	if (tree == NULL)
	{
		return (0);
	}
	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);
	if (x > y)
	{
		return (x + 1);
	}
	else
	{
		return (y + 1);
	}

}
