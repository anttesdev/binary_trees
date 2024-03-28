#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call for each node
 *
 * Description: In-order traversal visits left, current, right nodes.
 * If @tree or @func is NULL, does nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
