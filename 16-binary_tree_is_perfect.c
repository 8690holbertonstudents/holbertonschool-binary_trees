#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: tree to test
 * Return: 1 if perfect , 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_height = binary_tree_is_perfect(tree->left);
	right_height = binary_tree_is_perfect(tree->right);

	if (left_height < right_height)
		return (left_height);
	else
		return (right_height);
}
