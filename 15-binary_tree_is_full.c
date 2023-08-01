# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_is_full - number of nodes
* @tree: root of the binary tree
* Return: 0 on failure , if full BT
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
	{
		return (0);
	}

	left_h = 1 + binary_tree_size(tree->left);
	right_h = 1 + binary_tree_size(tree->right);

	return (size);
}
