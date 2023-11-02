#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the leaves of.
 * Return: The number of leaves in the tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
{
	return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
	return (1);
}

size_t left_leaves = binary_tree_leaves(tree->left);
size_t right_leaves = binary_tree_leaves(tree->right);

return (left_leaves + right_leaves);
}
