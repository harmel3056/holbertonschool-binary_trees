#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rchild;

	if (parent == NULL)
		return (NULL);

	rchild = malloc(sizeof(binary_tree_t));

	if (rchild == NULL)
	{
		free(rchild);
		return (NULL);
	}

	rchild->n = value;

	if (parent->right != NULL)
	{
		rchild->parent = parent;
		rchild->left = NULL;
		rchild->right = parent->right;

		parent->right->parent = rchild;
	}

	else
	{
		rchild->parent = parent;
		rchild->left = NULL;
		rchild->right = NULL;
	}

	parent->right = rchild;

	return (rchild);
}
