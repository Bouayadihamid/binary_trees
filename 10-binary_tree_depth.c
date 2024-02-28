#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a BT
 *
 * @tree: ptr to the node to measure the depth
 * Return: return the depth of a node in a BT
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i;

	if (tree == NULL)
	{
		return (0);
	}
	for (i = 0; tree->parent != NULL; i++)
	{
		tree = tree->parent;
	}
	return (i);
}
