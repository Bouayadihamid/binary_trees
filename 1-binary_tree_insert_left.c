#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_left - Binary tree left insertion
 *
 * @parent: Pointer to the parent node
 * @value: the value to store in the new node
 *
 * Return: return a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
	}
	parent->left = newNode;
	return (newNode);
}
