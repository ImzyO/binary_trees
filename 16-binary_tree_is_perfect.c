#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */
 
int binary_tree_is_perfect(const binary_tree_t *tree)
{
        int left, right, size, pow;

        if (tree == NULL)
          return (0);

        left = custom_binary_tree_height(tree->left);
        right = custom_binary_tree_height(tree->right);
        size = binary_tree_size(tree);

        if (size == 1)
          return (1);
          
        if (left >= 0 && right >= 0 && left == right)
        {
          pow = get_power(left + 1);

          if (pow - 1 == size)
            return (1);
        }

        return (0);
}
