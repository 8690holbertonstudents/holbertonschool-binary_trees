#include "binary_trees.h"
/**
 * binary_tree_depth - fct which calculate the depth of a BT
 * @tree: tree to test
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	size_t depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	if (tree->parent != NULL)
		depth = binary_tree_depth(tree->parent) + 1;

return (depth);
}
