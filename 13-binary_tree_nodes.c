#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * in a binary tree
 * @tree: pointer to the root node of the tree to count # of nodes
 *
 * Return: number of nodes, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lchild;
	size_t rchild;

	if (tree == NULL)
		return (0);

	lchild = binary_tree_nodes(tree->left);
	rchild = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (lchild + rchild + 1);

	else
		return (lchild + rchild);
}
