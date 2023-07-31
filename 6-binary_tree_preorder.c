# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_preorder - root-->left-->right
* @tree: root of the binary tree
* @func: function that prints the value of the node on the tree
* Return: Nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	if (tree == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
