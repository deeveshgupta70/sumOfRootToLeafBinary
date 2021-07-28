    int sumLeaf( binarySearchTree* root,int sum){
        
        if(!root) return 0;
        
        sum = (sum<<1) + root->data;
        
        if( !root->left && !root->right) return sum;
        
        return (sumLeaf(root->left,sum)+ sumLeaf( root->right,sum));
    
    }
    
    
    int sumRootToLeaf(binarySearchTree* root) {
        int res = sumLeaf(root,0);
        return res;
    }
    /*
    Input :
    1 0 1 0 1 0 1
    
  Output:
  22
  */
