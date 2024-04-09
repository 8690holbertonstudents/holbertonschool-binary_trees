#include "binary_trees.h"
/**
 * binary_tree_size - fct which calculate the size of a tree
 * @tree: tree to test
 * Return: size wanted
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_tr = binary_tree_size(tree->left);
	size_t right_tr = binary_tree_size(tree->right);

	return (left_tr + right_tr + 1);
}
