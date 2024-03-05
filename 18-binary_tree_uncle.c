#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: ptr to the node to find the uncle
 *
 * Return: return a ptr to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *parent = node->parent;

	if (parent->parent->left == parent)
	{
		return (parent->parent->right);
	}
	else
	{
		return (parent->parent->left);
	}
}
