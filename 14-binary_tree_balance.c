#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 *
 * Return: the balance factor of tree, 0 if tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of tree, 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{
		if (tree->left != NULL)
			left_height = 1 + binary_tree_height(tree->left);
		else
			left_height = 0;

		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);
		else
			right_height = 0;

		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}
	return (0);
}