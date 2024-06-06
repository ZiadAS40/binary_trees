#include "binary_trees.h"


/**
 * binary_tree_balance - get the balance factor of the node.
 * @tree: the root node of the tree.
 * Return: the balance factor.
*/


int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;
	int left_height = 0;
	int right_height = 0;

	if (!tree)
	return (0);

	if (tree->left)
	left_height = (int)binary_tree_height(tree->left) + 1;

	if (tree->right)
	right_height = (int)binary_tree_height(tree->right) + 1;

	balance_factor = left_height - right_height;
	return (balance_factor);
}


/**
 * binary_tree_height - meature the height.
 * @tree: the root node of the tree.
 * Return: the height of the tree
 * 0 if no tree (tree == NULL).
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_counter = 0, right_counter = 0;

	if (!tree)
	return (0);

	if (tree->left)
	{
		left_counter++;
		left_counter += binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		right_counter++;
		right_counter += binary_tree_height(tree->right);
	}

	if (left_counter > right_counter)
	return (left_counter);
	else
	return (right_counter);
}
