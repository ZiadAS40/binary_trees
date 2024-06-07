#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a new node at the left
 * of a parent node.
 * @parent: a pointer to the parent node.
 * @value: the value of the node to be added.
 * Return: a pointer to the new node if success
 * and NULL if fails.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
	return (NULL);

	if (!parent)
	free(newNode);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;
	newNode->left = parent->left;

	if (parent->left == NULL)
	parent->left = newNode;
	else
	{
		parent->left = newNode;
		newNode->left->parent = newNode;
	}

	return (newNode);
}
