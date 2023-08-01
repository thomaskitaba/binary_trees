# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_insert_right - create a binary tree node
* @parent: parent node
* @value: value for the new node
* Return: pointer to the new_left node created
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (parent == NULL)
		return (NULL);

	new_right = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_right == NULL)
		return (NULL);

	new_right->n = value;
	new_right->left = NULL;
	new_right->right = NULL;
	new_right->parent = parent;

	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right->parent = new_right;
	}

	parent->right = new_right;
	return (new_right);
}
