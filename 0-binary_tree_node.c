#include "binary_trees.h"

/**
 * binary_tree_node - add a new node in the tree
 * @parent: a pointer to the parent of the node
 * to be added.
 * @value: the value of the node to be added.
 * Return: a pointer to the node if added
 * if the process fails return null.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
	return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
