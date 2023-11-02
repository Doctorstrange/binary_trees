#include "binary_trees.h"\

/**
 * recurse - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 * Return: If full zero
 */
int recurse(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    recurse(tree->left) == 0 ||
		    recurse(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (recurse(tree));
}
