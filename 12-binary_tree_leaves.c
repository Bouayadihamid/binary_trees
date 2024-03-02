#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in binary tree
 *
 * @tree: ptr to the root of the tree
 *
 * Return: return the nbre of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	else
	{
		right = binary_tree_leaves(tree->right);
		left = binary_tree_leaves(tree->left);
	}
	return (left + right);

}
