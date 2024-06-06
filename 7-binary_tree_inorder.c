#include "binary_trees.h"

/**
 * binary_tree_inorder - visit all the node in-order way.
 * @tree: the root node of the tree.
 * @func: a fuction to be applied to all the nodes.
*/


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	return;

	if (tree->left)
	binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right)
	binary_tree_inorder(tree->right, func);
}
