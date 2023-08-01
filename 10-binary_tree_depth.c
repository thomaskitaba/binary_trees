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
		depth ++;
		tree = tree->parent;
	}
	return (depth);
}
