#include "binary_trees.h"
/**
 * binary_tree_preorder - fct which print out values' nodes of a BT
 * @tree: tree to test
 * @func: function to call to print out the value of the node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
