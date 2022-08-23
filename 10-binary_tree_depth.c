#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a tree
 * Depth is measured from root parent node going down
 * @tree: pointer to node to measure depth of
 *
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
        if (tree == NULL || tree->parent == NULL)
          return (0);

        return (binary_tree_depth(tree->parent) + 1);
}
