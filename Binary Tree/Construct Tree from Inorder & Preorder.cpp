

//****Construct Tree from Inorder & Preorder

class Solution{
    public:
    int find(int in[],int target,int start,int end){
        for(int i = start;i<=end;i++){
            if(target==in[i]) return i;
        }
        return -1;
    }
    Node* tree(int in[],int pre[],int Instart,int inEnd,int indx){
         if(Instart>inEnd) return NULL;
         Node* root = new Node(pre[indx]);
         int pos = find(in,pre[indx],Instart,inEnd);
         root->left = tree(in,pre,Instart,pos-1,indx+1);
         root->right = tree(in,pre,pos+1,inEnd,indx+(pos-Instart)+1);
         return root;
    }
    
       Node* buildTree(int in[],int pre[], int n){
       return tree(in,pre,0,n-1,0); 
    }
};

**************We can reduce the time complexity using map for finding the element in the inorder vector*****************8
    // O(n) //O(n)
