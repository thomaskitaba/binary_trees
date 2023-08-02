# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_is_full - number of nodes
* @tree: root of the binary tree
* Return: 0 on failure , if full BT
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_s, right_s, left_h, right_h;

	if (tree == NULL)
	{
		return (0);
	}
    if (tree->left != NULL && tree->right != NULL)
    {
        /* the recursive call will be place here*/
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
