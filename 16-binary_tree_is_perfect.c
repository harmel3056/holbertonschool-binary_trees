#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if binary tree is perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int ldepth;
	int rdepth;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	ldepth = tree_depth(tree->left);
	rdepth = tree_depth(tree->right);

	if (ldepth == rdepth && tree->left != NULL && tree->right != NULL)
		return (1);

	else
		return (0);
}

/**
 * tree_depth - calculates depth of subtree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: depth of subtree
 */

int tree_depth(const binary_tree_t *tree)
{
	int ldepth;
	int rdepth;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	ldepth = tree_depth(tree->left);
	rdepth = tree_depth(tree->right);

	if (ldepth > rdepth)
		return (ldepth + 1);

	else
		return (rdepth + 1);
}
