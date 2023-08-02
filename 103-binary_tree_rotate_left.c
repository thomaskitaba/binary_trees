# include "binary_trees.h"
/**
* binary_tree_rotate_left - invert tree to left
* @tree: root of the tree
* Return: pointer to the root of the inverted root
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	temp = tree->right;
	tree->right = temp->left;

	if (temp->left != NULL)
	{
		temp->left->parent = tree;
	}
	temp->left = tree;
	temp->parent = tree->parent;
	tree->parent = temp;
	return (temp);
}
