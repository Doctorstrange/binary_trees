#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the leaves of.
 * Return: The number of leaves in the tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_num = 0;
if (tree == NULL)
{
	return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
	return (1);
}

else
{
leaf_num += binary_tree_leaves(tree->left);
leaf_num += binary_tree_leaves(tree->right);
}

return (leaf_num);
}
