#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node in a binary tree.
 * @tree: a pointer to the root node of the tree to measure the depth.
 *
 * Return: the depth of tree, 0 if tree is NULL.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}