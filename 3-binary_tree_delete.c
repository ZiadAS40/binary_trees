#include "binary_trees.h"

/**
 * binary_tree_delete - delete an intire binary tree
 * @tree: the root of the tree.
*/


void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	return;

	if (tree->left)
	binary_tree_delete(tree->left);

	if (tree->right)
	binary_tree_delete(tree->right);

	free(tree);
}
