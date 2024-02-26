#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: ptr to the parent node
 * @value: the value to put in the new node
 *
 * Return: return the newNode
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
