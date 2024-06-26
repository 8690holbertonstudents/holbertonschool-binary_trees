#include "binary_trees.h"
/**
 * binary_tree_uncle - fct that find the uncle of a specific node
 * @node: node to test
 * Return: the value of the node uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent == NULL)
		return (NULL);

	if (grandparent->left == NULL || grandparent->right == NULL)
		return (NULL);

	if (grandparent->left == parent)
		return (grandparent->right);

	return (grandparent->left);
}


