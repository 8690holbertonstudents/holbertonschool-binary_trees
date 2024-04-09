#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes
 * an entire binary tree
 * @tree: pointer to root node
 * Return:  Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		exit(0);

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);

}
