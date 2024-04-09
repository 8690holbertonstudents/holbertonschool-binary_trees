#include "binary_trees.h"
/**
 * binary_tree_uncle - fct that find the uncle of a specific node
 * @node: node to test
 * Return: the value of the node uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *parent = node->parent;

	binary_tree_t *grandparent = parent->parent;

	if (grandparent->left == parent)
	{
		return (grandparent->right);
	} else
		return (grandparent->left);
}

