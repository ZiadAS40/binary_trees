#include "binary_trees.h"

/**
 * binary_tree_size - get the size of the tree.
 * @tree: the root node of the tree.
 * Return: the size of the tree.
*/


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 1;

	if (!tree)
	return (0);

	if (tree->left)
	counter += binary_tree_size(tree->left);

	if (tree->right)
	counter += binary_tree_size(tree->right);

	return (counter);
}
