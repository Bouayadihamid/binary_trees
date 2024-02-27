#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 *
 * @parent: Ptr to the node to insert the right child in
 * @value: Value to store in the new node
 *
 * Return: Ptr to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	newNode->right = NULL;
	newNode->left = NULL;
	if(parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);

}
