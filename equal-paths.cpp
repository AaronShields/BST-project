#include "equal-paths.h"
using namespace std;


#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
int findheight(Node* root){
    if(!root){
        return 0; 
    }
    int lh = findheight(root->left); 
    //find height of left branch
    int rh = findheight(root->right); 
    //find height of right branch 
    int diff = lh - rh; 
    //check the difference 
    if((lh == -1) || (rh == -1)){
        return -1; 
    }
    if(abs(diff) > 1){
        return -1; 
    }
    else{
        if(lh > rh){
        return lh + 1; 
        }
        else{
        return rh + 1; 
    }    
}
}
bool equalPaths(Node * root)
{
    if(findheight(root) == -1){
        return false;
    }
    return false; 
}

