#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lchild;

	if (parent == NULL)
		return (NULL);

	lchild = malloc(sizeof(binary_tree_t));

	if (lchild == NULL)
	{
		free(lchild);
		return (NULL);
	}

	lchild->n = value;

	if (parent->left != NULL)
	{
		lchild->parent = parent;
		lchild->left = parent->left;
		lchild->right = NULL;

		parent->left->parent = lchild;
	}

	else
	{
		lchild->parent = parent;
		lchild->left = NULL;
		lchild->right = NULL;
	}

	parent->left = lchild;

	return (lchild);
}
