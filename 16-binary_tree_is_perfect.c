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
