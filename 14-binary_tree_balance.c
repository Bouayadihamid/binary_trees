#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a BT
 *
 * @tree: ptr to the root node of the tree to measure the balance factor
 *
 * Return: return the balance factor
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
	{
		return (0);
	}
	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);
	return (1 + (left > right ? left : right));
}
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
