# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_insert_left - create a binary tree node
* @parent: parent node
* @value: value for the new node
* Return: pointer to the new_left node created
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *new_left;

	new_left = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);
	new_left->parent = parent;
	new_left->left = NULL;
	new_left->right = NULL;
	new_left->n = value;

	if (parent->left != NULL)
	{
		/* make new_left left node point to old left node*/
		new_left->left = parent->left;
		/* make the old left parent point to the inserted left*/
		parent->left->parent = new_left;
	}
	/* make the parent point to the created left node*/
	parent->left = new_left;

	/* return the created left node*/
	return (new_left);
}
