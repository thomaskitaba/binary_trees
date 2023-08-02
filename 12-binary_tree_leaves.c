#include"binary_trees.h"
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
* binary_tree_leaves - number of leaves
* @tree: root of the binary tree
* Return: height of a tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size;

    size = 0;
	if (tree == NULL)
	{
		return (0);
	}

	size = binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);

	return (size);
}
