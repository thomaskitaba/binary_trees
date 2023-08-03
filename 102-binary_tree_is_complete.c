# include "binary_trees.h"
# include <stdlib.h>

/**
* binary_tree_is_complete - number of nodes
* @tree: root of the binary tree
* Return: 0 on failure , if full BT
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t left_full, right_full;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		/* the recursive call will be place here*/
		left_full = binary_tree_is_complete(tree->left);
		right_full = binary_tree_is_complete(tree->right);
		if (left_full == 1 && right_full == 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
