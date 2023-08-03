#include "binary_trees.h"
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
 * bst_insert - Insert a value into a Binary Search Tree (BST).
 * @tree: Pointer to the root node of the BST.
 * @value: Value to be inserted into the BST.
 *
 * Return: Pointer to the root node of the BST after insertion.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current, *parent;

	current = tree;
	parent = NULL;
	while (current != NULL)
	{
		parent = current;
		if (current->n == value)
			return (NULL);
		else if (current->n < value)
			current = current->right;
		else
			current = current->left;

	}
	return (NULL);
}
