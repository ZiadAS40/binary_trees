#include "binary_trees.h"


/**
 * binary_tree_preorder - visit all the nodes on pre-order way.
 * @tree: a pointer to the root node.
 * @func: a function to be applied to all the nodes
*/


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	return;

	if (!func)
	return;

	func(tree->n);

	if (tree->left)
	binary_tree_preorder(tree->left, func);

	if (tree->right)
	binary_tree_preorder(tree->right, func);
}
