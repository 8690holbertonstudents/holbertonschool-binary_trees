#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: tree to test
 * Return: 1 if perfect , 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));

}
