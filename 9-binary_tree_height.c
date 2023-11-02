#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of tree, 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height = height + 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		height = height + 1 + binary_tree_height(tree->right);

	return (height);
}
