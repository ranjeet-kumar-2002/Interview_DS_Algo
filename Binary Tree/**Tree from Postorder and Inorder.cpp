//**Tree from Postorder and Inorder


int find(int in[],int target,int start,int end){   //O(n^2) //O(n)
    for(int i =start;i<=end;i++){
        if(in[i]==target) return i;
    }
    return -1;
}

Node* tree(int in[],int post[],int instart,int inend,int indx ){
     if(instart>inend) return NULL;
     Node* root = new Node(post[indx]);
     int pos = find(in,post[indx],instart,inend);
     root->right = tree(in,post,pos+1,inend,indx-1);
     root->left = tree(in,post,instart,pos-1,indx-(inend-pos)-1);
     return root;
}
Node *buildTree(int in[], int post[], int n) {
   return tree(in,post,0,n-1,n-1);
}

**************We can reduce the time complexity using map for finding the element in the inorder vector*****************8
    // O(n) //O(n)
