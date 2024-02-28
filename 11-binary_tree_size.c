#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: ptr to the root node of the tree to measure th size
 * Return: returns the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0, left, right;

	if (!tree)
	{
		return (0);
	}
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = left + right + 1;
	return (size);
}
