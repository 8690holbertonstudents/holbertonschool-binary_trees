#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if
 * a binary tree is full
 * @tree: tree to test
 * Return: nb of leaves in a binary tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_height = binary_tree_is_full(tree->left);
	right_height = binary_tree_is_full(tree->right);

	if (left_height < right_height)
		return (left_height);
	else
		return (right_height);
}
