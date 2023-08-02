# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_height -	max depth, or height of a BT
* @tree: root of the binary tree
* Return: height of a tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}
}
