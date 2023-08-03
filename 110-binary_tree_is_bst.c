# include "binary_trees.h"
/**
* binary_tree_is_bst - invert tree to right
* @tree: root of the tree
* Return: 1 if tree is valid BST, 0 otherwise
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{


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
				return (1);

			else
				return (0);
		}
		if (tree->right!= NULL)
		{
			if (tree->n < tree->right->n)
				return (1);
			else
				return (0);
		}
	}

	return (0);
}
