#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts
 * the leaves in a binary tree
 * @tree: tree to test
 * Return: nb of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = (binary_tree_leaves(tree->left));
	right_height = (binary_tree_leaves(tree->right));

	return (right_height + left_height);
}
