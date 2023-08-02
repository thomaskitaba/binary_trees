# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_depth - depth from sepcfic node to root
* @tree: root of the binary tree
* Return: height of a tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
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
* binary_tree_is_perfect - check if Binary tree is perfect or not
* @tree: root of the binary tree
* Return: 1 if perfect, 0 if not perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right, leaf, depth;

	depth = binary_tree_depth(tree);
	left = right = leaf = 0;
	if (tree == NULL)
	{
		return (0);
	}
	leaf++;
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	if ((left == 0 && right == 0) && (leaf == depth))
		return (1);
	return (0);
}
