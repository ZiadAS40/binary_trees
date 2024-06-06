#include "binary_trees.h"


/**
 * binary_tree_nodes - counts the nodes with at least 1 child in the tree.
 * @tree: the root node of the tree.
 * Return: the number of the node with at least 1 child.
*/


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
	return (0);

	if (tree->left)
	{
		counter++;
		counter += binary_tree_nodes(tree->left);
	}

	if (tree->right)
	{
		counter++;
		counter += binary_tree_nodes(tree->right);
	}

	if (!(tree->parent))
	counter--;

	return (counter);
}
