# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_is_leaf - create a binary tree node
* @node: parent node
* Return: 1 if node is leaf, or 0 if not
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
