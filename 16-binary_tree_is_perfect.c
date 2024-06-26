#include "binary_trees.h"

double _pow(double base, int exponent);

/**
 * binary_tree_is_perfect - check if the tree if perfect.
 * @tree: the root node of the tree.
 * Return: 1 if success
 * 0 if fails.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;
	int ex_number_nodes;
	int real_number_node;

	height = binary_tree_height(tree);

	ex_number_nodes = _pow(2, (height + 1)) - 1;

	real_number_node = binary_tree_size(tree);

	if (real_number_node == ex_number_nodes)
	return (1);
	else
	return (0);
}


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

/**
 * _pow - calculates the power of a number.
 * @base: the base number.
 * @exponent: the exponent to raise the base to.
 * Return: the result of base raised to the power of exponent.
 */

double _pow(double base, int exponent)
{
	double result = 1.0;
	int i;

	if (exponent < 0)
	{
		base = 1 / base;
		exponent = -exponent;
	}

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return (result);
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
