#include "binary_trees.h"
/**
 * binary_tree_balance - fct which calculate balance of a tree
 * @tree: tree to test
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	int left_height;
	int right_height;
	int balance;


	if (tree == 0)
		return (0);

	left_height = 0;

	if (tree->left != NULL)
	{
		left_height = 1;

		left_height = left_height + binary_tree_balance(tree->left);
	}

	right_height = 0;

	if (tree->right)
	{
		right_height = 1;

		right_height = right_height + binary_tree_balance(tree->right);
	}

	balance = left_height - right_height;

return (balance);

}
