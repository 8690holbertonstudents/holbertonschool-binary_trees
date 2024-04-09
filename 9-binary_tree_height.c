#include "binary_trees.h"
/**
 * binary_tree_height - fct which give the height of an node
 * @tree: tree to test
 * Return: height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = (binary_tree_height(tree->left)) + 1;
	right_height = (binary_tree_height(tree->right)) + 1;

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
