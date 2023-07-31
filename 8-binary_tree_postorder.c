# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_postorder - left-->right-->root
* @tree: root of the binary tree
* @func: function that prints the value of the node on the tree
* Return: Nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	if (tree == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
    func(tree->n);

}
