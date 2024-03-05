#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - count the height of a BT
 *
 * @tree: ptr to the tree
 *
 * Return: the height of a BT
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return ((left > right ? left : right) + 1);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 *
 * @tree: ptr to the root node of the tree to check
 *
 * Return: perfect or not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l == r && binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right))
	{
		return (1);
	}
	return (0);
}
