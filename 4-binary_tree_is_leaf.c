#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the node is leaf.
 * @node: the node to be checked.
 * Return: if the node is leaf 1
 * if the node is not 0.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	return (0);

	if (!(node->left) && !(node->right))
	return (1);

	return (0);
}
