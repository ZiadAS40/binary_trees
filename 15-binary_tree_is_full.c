#include "binary_trees.h"

/**
 * binary_tree_is_full - test if the tree is full.
 * @tree: the root node of the tree.
 * Return: 1 if success.
 * 0 if fail
*/



int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag = 1;

	if (!tree)
	return (0);

	if (tree->left)
	{
		if (tree->right)
		flag = binary_tree_is_full(tree->left);
		else
		flag = 0;
	}

	if (tree->right)
	{
		if (tree->left)
		flag = binary_tree_is_full(tree->right);
		else
		flag = 0;
	}

	return (flag);
}
