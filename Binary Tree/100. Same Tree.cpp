
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 
       p     q
step1: NULL  NULL
step2: NULL  Node
step3: Node  NULL
step4: Node  Node

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q ==NULL) return true;
        if(p==NULL && q !=NULL) return false;
        if(p!=NULL && q ==NULL) return false;
        if(p->val != q->val) return false;
        return (isSameTree(p->left,q->left) &&  isSameTree(p->right,q->right));
     }
};

*********************************************************************************
class Solution {
public:
    bool f(TreeNode* p, TreeNode* q){
        if(p==NULL && q ==NULL) return true;
        if(p==NULL && q !=NULL) return false;
        if(p!=NULL && q ==NULL) return false;
        if(p->val != q->val) return false;
        return (f(p->left,q->left) && f(p->right,q->right));
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
         return f(p,q);
    }
};
*****************************************************************************

class Solution
{
    public:
    bool f(Node* r1,Node* r2){
        if(r1==NULL && r2==NULL) return true;
        if(r1==NULL && r2!= NULL) return false;
        if(r1!=NULL && r2==NULL) return false;
        if(r1->data !=r2->data) return false;
        bool leftpart = f(r1->left,r2->left);
        bool rightpart = f(r1->right,r2->right);
        return leftpart && rightpart;
    }
    bool isIdentical(Node *r1, Node *r2)
    {
        return f(r1,r2);
    }
};

***********************************using bfs***********************************************

 
