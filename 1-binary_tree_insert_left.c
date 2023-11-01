#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child of another node.
 * @parent: a pointer to the parent node of the node to create.
 * @value: the value to put in the new node.
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	
	binary_tree_t *node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
