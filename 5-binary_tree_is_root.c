#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node is root.
 * @node: the node to be checked
 * Return: if the node is root return 1
 * if not return 0.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	return (0);

	if (!(node->parent))
	return (1);

	return (0);
}
