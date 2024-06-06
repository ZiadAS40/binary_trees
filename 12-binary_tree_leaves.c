#include "binary_trees.h"


/**
 * binary_tree_leaves - counts how many leafs in the tree.
 * @tree: the root node of the tree.
 * Return: the number of leafs.
*/


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
	return (0);

	if (tree->left)
	counter += binary_tree_leaves(tree->left);
	if (tree->right)
	counter += binary_tree_leaves(tree->right);
	if (!(tree->left) && !(tree->right))
	counter++;

	return (counter);
}
