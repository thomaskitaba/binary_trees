# include "binary_trees.h"
# include <stdlib.h>

/**
* binary_tree_is_perfect - check if Binary tree is perfect or not
* @tree: root of the binary tree
* Return: 1 if perfect, 0 if not perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_full, right_full;

	left_full = right_full = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		/* the recursive call will be place here*/
		left_full = 1 + binary_tree_is_perfect(tree->left);
		right_full = 1 + binary_tree_is_perfect(tree->right);
		if (right_full == left_full)
		{
			if (right_full != 0 || left_full != 0)
			{
				return (right_full);
			}
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
	return (0);
}
