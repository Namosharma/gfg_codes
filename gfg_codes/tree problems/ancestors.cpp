//User function template for C++

/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/

class Solution{
  public:
    // Function should return all the ancestor of the target node
    bool helper(struct Node*root,int target,vector<int> &v){
        if(root==NULL){
            return false;
        }
        if(root->data==target){
            return true;
        }
        if(helper(root->left,target,v) || helper(root->right,target,v)){
            v.push_back(root->data);
        }
    }
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
         vector<int> v;
        helper(root,target,v);
        return v;
    }
};