#include "equal-paths.h"
#include <iostream>
using namespace std;


// You may add any prototypes of helper functions here
    
bool checkUtil(struct Node *root, int level, int *leafLevel)
{
    if (!root){
        return true; 
    } 
    if (root->left == NULL && root->right == NULL)
    {
        if (*leafLevel == 0)
        {
            *leafLevel = level; // Set first found leaf's level
            return true;
        }
 
        // If this is not first leaf node, compare
        // its level with first leaf's level
        return (level == *leafLevel);
    }
 
    // If this node is not leaf, recursively
    // check left and right subtrees
    return checkUtil(root->left, level + 1, leafLevel) && checkUtil(root->right, level + 1, leafLevel);
}

bool equalPaths(Node * root)
{
    int level = 0, leafLevel = 0;
    return checkUtil(root, level, &leafLevel);
}
