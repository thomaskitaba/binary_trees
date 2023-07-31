# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_node - create a binary tree node
* @parent: parent node
* @value: value of a parent node
* Return: pointer to the new_node created
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	/* new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t)) */
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* *new_node.parent = parent; */
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
