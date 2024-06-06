#include "binary_trees.h"

/**
 * binary_tree_depth - meature the depth of the node.
 * @tree: the node.
 * Return: the depth of that node.
 * 0 if (!node).
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		counter++;
		counter += binary_tree_depth(tree->parent);
	}

	return (counter);
}
