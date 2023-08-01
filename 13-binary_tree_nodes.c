# include "binary_trees.h"
# include <stdlib.h>
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
	size = 1 + binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);

	return (size);
}
