# include "binary_trees.h"
# include <stdlib.h>
/**
* bst_search - find root in a bst
* @tree: root of the binary tree
* @value: value to be searched
* Return: pointer to node located,  or NUll if not found
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *current, *parent;

	current = tree;
	while (current != NULL)
	{
		if (current->n == value)
			return (current);
		else if (current->n < value)
			current = current->right;
		else
			current = current->left;

	}
	return (NULL);
}
