# include "binary_trees.h"
# include <stdlib.h>

/**
* binary_tree_is_perfect - check if Binary tree is perfect or not
* @tree: root of the binary tree
* Return: 1 if perfect, 0 if not perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + tree_is_perfect(tree->left);
		r = 1 + tree_is_perfect(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
