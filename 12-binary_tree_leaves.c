# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_height -	max depth, or height of a BT
* @tree: root of the binary tree
* Return: height of a tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t size;

    size = 0;
	if (tree == NULL)
	{
		return (0);
	}

    size ++;
    binary_tree_height(tree->left);
    binary_tree_height(tree->right);

    return (size);
}
