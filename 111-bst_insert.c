#include "binary_trees.h"

/**
 * bst_insert - Insert a value into a Binary Search Tree (BST).
 * @tree: Pointer to the root node of the BST.
 * @value: Value to be inserted into the BST.
 *
 * Return: Pointer to the root node of the BST after insertion.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
	{
		return (NULL);
	}

	if (*tree == NULL)
	{
		/* If the tree is empty, create a new node and make it the root node */
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	/* If the value is already present, ignore it and return NULL */
	if (value == (*tree)->n)
	{
		return (NULL);
	}

	/* Recursively insert the value into the appropriate subtree*/
	if (value < (*tree)->n)
	{
		return (bst_insert(&(*tree)->left, value));
	}
	else
	{
		return (bst_insert(&(*tree)->right, value));
	}
}
