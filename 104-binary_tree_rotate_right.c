# include "binary_trees.h"
/**
* binary_tree_rotate_right - invert tree to right
* @tree: root of the tree
* Return: pointer to the root of the inverted root
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;
    /* check if we have left node*/
	if (tree == NULL || tree->left == NULL)
		return (NULL);
    /* set tree->left node as temp */
	temp = tree->left;
    /* assign right_grand_child of temp as left child of tree */
	tree->left = temp->right;
    /* chag*/
	if (temp->right != NULL)
	{
		temp->right->parent = tree;
	}
    /* make tree child of  temp*/
	temp->right = tree;
	temp->parent = tree->parent;
	tree->parent = temp;
	return (temp);
}
