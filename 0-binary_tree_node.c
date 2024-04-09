#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to add in the node
 * Return:  function must return a pointer to the new node,
 * or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (value < INT_MIN || value > INT_MAX)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
