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
* binary_tree_nodes - number of nodes
* @tree: root of the binary tree
* Return: height of a tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
	{
		return (0);
	}
	size = 1 + binary_tree_nodes(tree->left);
	size = size + binary_tree_nodes(tree->right);

	return (size);
}
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

	left_s = binary_tree_nodes(tree->left);
	right_s = binary_tree_nodes(tree->right);
    left_h = binary_tree_nodes(tree->left);
    right_h = binary_tree_height(tree->right);
    if (left_s == right_s && left_h == right_h)
	    return (1);
    else
        return (0);
}
