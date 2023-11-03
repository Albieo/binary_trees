#include "binary_trees.h"
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect.
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is perfect, 0 if tree is NULL.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
		return (0);

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (left_depth == right_depth)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}

/**
 * binary_tree_depth - a function that measures the depth of
 * a node in a binary tree.
 * @tree: a pointer to the root node of the tree to measure the depth.
 *
 * Return: the depth of tree, 0 if tree is NULL.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));

	return (0);
}
