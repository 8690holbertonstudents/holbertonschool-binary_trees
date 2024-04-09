#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts
 * a node as the left-child of another node
 * @parent: pointer to the node to insert
 * @value: value to add in the node
 * Return:  function must return a pointer to the new node,
 * or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	if (value < INT_MIN || value > INT_MAX)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = newnode;
		newnode->left = parent->left;
	}

	newnode->parent = parent;
	parent->left = newnode;

	return (newnode);
}
