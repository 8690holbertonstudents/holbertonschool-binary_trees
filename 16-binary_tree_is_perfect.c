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
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: tree to test
 * Return: 1 if perfect , 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t total_height = left_height + right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (total_height == 1)
		return (1);

	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));

}
