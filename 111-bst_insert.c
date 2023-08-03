# include "binary_trees.h"
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
/**
* check_if_bst - invert tree to right
* @tree: root of the tree
* Return: 1 if tree is valid BST, 0 otherwise
*/
bst_t *array_to_bst(int *array, size_t size)
{
	int is_tree;

	is_tree = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		tree->left ? binary_tree_is_bst(tree->left) : 0;
		 tree->right ? binary_tree_is_bst(tree->right) : 0;

		if (tree->left != NULL)
		{
			if (tree->n > tree->left->n)
			{
				is_tree++;
				return (is_tree);
			}
			else
				return (is_tree);
		}
		if (tree->right != NULL)
		{
			if (tree->n < tree->right->n)
			{
				is_tree++;
				return (is_tree);
			}
			else
				return (is_tree);
		}
	}
	return (is_tree);
}
