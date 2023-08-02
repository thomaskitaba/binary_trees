# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_size - number of nodes
* @tree: root of the binary tree
* Return: height of a tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
	{
		return (0);
	}

	size = 1 + binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);

	return (size);
}
/**
* binary_tree_leaves - conunt number of leaves
* @tree: root node of the tree
* Return: number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, leaf;

	left = right = leaf = 0;
	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	leaf = left + right;
	if (left == 0 && right == 0)
		return (leaf + 1);
	return (leaf);
}
/**
* binary_tree_nodes - number of nodes
* @tree: root of the binary tree
* Return: non leaf nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t none_leaf, size, leaves;

	none_leaf = size = leaves = 0;
	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	leaves = binary_tree_leaves(tree);

	none_leaf = size - leaves;
	return (none_leaf);
}
