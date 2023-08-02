# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_sibling - number of nodes
* @node: node of a binary tree
* Return: sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
		else
			return (NULL);
	}
	if (node->parent->left)
		return (node->parent->left);
	else
		return (NULL);
}
