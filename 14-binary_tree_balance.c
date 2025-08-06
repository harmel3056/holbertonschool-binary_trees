#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * to measure the balance factor
 *
 * Return: balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight;
	int rheight;

	if (tree == NULL)
		return (0);

	lheight = tree_height(tree->left);
	rheight = tree_height(tree->right);

	return (lheight - rheight);
}


/**
 * tree_height - calculates height of a substring
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree
 */

int tree_height(const binary_tree_t *tree)
{
	int lheight;
	int rheight;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	lheight = tree_height(tree->left);
	rheight = tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);

	else
		return (rheight + 1);
}
