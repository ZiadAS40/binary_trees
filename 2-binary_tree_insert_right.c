#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new node at the right
 * of a parent node.
 * @parent: a pionter to the parent node.
 * @value: the value to be added
 * Return: if success return a pointer to the new node
 * if fails return NULL.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode || !parent)
	return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = parent->right;

	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}

