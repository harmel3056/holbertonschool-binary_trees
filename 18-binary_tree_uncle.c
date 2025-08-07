#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle, or NULL if not possible
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent &&
			node->parent->parent->right)
		return (node->parent->parent->right);

	if (node->parent->parent->right == node->parent &&
			node->parent->parent->left != NULL)
		return (node->parent->parent->left);

	return (NULL);
}
