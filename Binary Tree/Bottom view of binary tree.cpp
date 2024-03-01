class Solution {
  public:
    void find(Node* root,int &l ,int &r,int pos){
        if(!root) return;
        l = min(l,pos);
        r = max(r,pos);
        if(root->left) find(root->left,l,r,pos-1);
        if(root->right) find(root->right,l,r,pos+1);
    }
    vector<int>bottomview(Node* root){
        if(!root) return {};
        int l = 0,r=0,pos=0;
        find(root,l,r,pos);
        int n = r-l+1;
        vector<int>ans(n);
        queue<Node*>q;
        queue<int>indx;
        q.push(root);
        indx.push(-1*l);
        while(!q.empty()){
            Node* temp = q.front();q.pop();
            int pos = indx.front();indx.pop();
            ans[pos]=temp->data;
            if(temp->left){
                q.push(temp->left);
                indx.push(pos-1);
            }
            if(temp->right){
                q.push(temp->right);
                indx.push(pos+1);
            }
            
        }
        return ans;
    }
    vector <int> bottomView(Node *root) {
        return bottomview(root);
    }
};
