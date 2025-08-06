#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lchild;
	size_t rchild;

	if (tree == NULL)
		return (0);

	lchild = binary_tree_size(tree->left);
	rchild = binary_tree_size(tree->right);

		return (lchild + rchild + 1);
}
