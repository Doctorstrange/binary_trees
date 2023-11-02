#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: If the node is a leaf - 1.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left != NULL || node->right != NULL || node == NULL)
		return (0);
	return (1);
}
