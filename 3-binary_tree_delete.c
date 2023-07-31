# include "binary_trees.h"
# include <stdlib.h>
/**
* binary_tree_delete - create a binary tree node
* @tree: parent node
* Return: NULL
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/* we used postorder traversal to delete our tree */
	/* it is taken as the best root to delete a binary tree */
	/* without any additional overhead code */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
