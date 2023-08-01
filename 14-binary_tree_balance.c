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
		size_t left_height = binary_tree_height(tree->left);
		size_t right_height = binary_tree_height(tree->right);

		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}

}
/**
* binary_tree_balance - number of nodes
* @tree: root of the binary tree
* Return: balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
