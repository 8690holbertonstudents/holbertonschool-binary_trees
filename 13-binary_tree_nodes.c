#include "binary_trees.h"
/**
 * binary_tree_nodes - fct which count nodes is one child is out
 * @tree: tree to test
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count = count + binary_tree_nodes(tree->left);
		count = count + binary_tree_nodes(tree->right);
		count++;
	}

	return (count);

}
