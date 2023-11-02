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

/**
 * depth - Returns the depth of a given
 *         node in a binary tree.
 * @tree: A pointer to the node to measure the depth of.
 *
 * Return: The depth of node.
 */
size_t node_depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + node_depth(tree->parent) : 0);
}

/**
 * get_leaf - Returns a leaf of a binary tree.
 * @tree: A pointer to the root node of the tree to find a leaf in.
 *
 * Return: A pointer to the first encountered leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree to check.
 * @leaf_depth: The depth of one leaf in the binary tree.
 * @level: Level of current node.
 *
 * Return: If the tree is perfect, 1, otherwise 0.
 */
int perfect_recursive(const binary_tree_t *tree,
		size_t leaf, size_t level)
{
	if (binary_tree_is_leaf(tree))
		return (level == leaf ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (perfect_recursive(tree->left, leaf, level + 1) &&
		perfect_recursive(tree->right, leaf, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or not perfect, 0.
 *         Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (perfect_recursive(tree, node_depth(get_leaf(tree)), 0));
}
