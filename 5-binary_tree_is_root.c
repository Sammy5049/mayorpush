#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is a root
 * @node: node to be studied
 * Return: 1 if leaf or 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}