#include "binary_trees.h"

/**
 * binary_tree_postorder - visit all the node in post-order way
 * @tree: the root node of the tree.
 * @func: a function to be applied to all nodes.
*/




void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	return;

	if (!func)
	return;

	if (tree->left)
	binary_tree_postorder(tree->left, func);

	if (tree->right)
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
