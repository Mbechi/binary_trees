#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf of binary tree
 * @node: pointer to node to check
 * Return: if the node is leaf - 1, otherwise - 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
