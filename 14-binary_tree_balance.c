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

	if (tree->left != NULL)
		left_height = (binary_tree_height(tree->left));

	if (tree->right != NULL)
		right_height = (binary_tree_height(tree->right));

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_balance - fct which calculate balance of a tree
 * @tree: tree to test
 * Return: balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = binary_tree_height(tree->left);

	if (tree->right != NULL)
		right = binary_tree_height(tree->right);

return (left - right);

}

