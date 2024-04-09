#include "binary_trees.h"
/**
 * binary_tree_postorder - fct which print out values' nodes of a BT
 * @tree: tree to test
 * @func: function to call to print out the value of the node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);

}
