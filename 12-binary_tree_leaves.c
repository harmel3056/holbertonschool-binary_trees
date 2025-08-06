#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count leaves in
 *
 * Return: number of leaves, or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lchild;
	size_t rchild;

	if (tree == NULL)
		return (0);

	lchild = binary_tree_leaves(tree->left);
	rchild = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else
		return (lchild + rchild);
}
