#include"binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, leaf;

    left = right = leaf = 0;
	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
    leaf = left + right;
    if (left == 0 && right == 0)
        return (leaf + 1);
    return (leaf);
}
