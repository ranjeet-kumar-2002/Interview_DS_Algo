//Vertical Traversal of Binary Tree

class Solution{
    public:
    void find(Node* root,int &l,int &r,int pos){
        if(!root) return;
        l = min(l,pos);
        r = max(r,pos);
        if(root->left) find(root->left,l,r,pos-1);
        if(root->right) find(root->right,l,r,pos+1);
    }
    vector<int>verticalorder(Node* root){
        vector<int>ans;
        if(!root) return ans;
        int l =0 ,r=0,pos=0;
        find(root,l,r,pos);
        vector<vector<int>>negative(abs(l)+1);
        vector<vector<int>>positive(r+1);
        queue<Node*>q;
        queue<int>indx;
        q.push(root);
        indx.push(0);
        while(!q.empty()){
            Node* temp = q.front();q.pop();
            int pos = indx.front();indx.pop();
            if(pos>=0) positive[abs(pos)].push_back(temp->data);
            else negative[abs(pos)].push_back(temp->data);
            if(temp->left) {
                    q.push(temp->left);
                    indx.push(pos-1);
                }
            if(temp->right) {
                    q.push(temp->right);
                    indx.push(pos+1);
                }
        }
        for(int i = negative.size()-1;i>0;i--){
            for(int j =0;j<negative[i].size();j++){
                ans.push_back(negative[i][j]);
            }
        }
         for(int i =0;i<positive.size();i++){
            for(int j =0;j<positive[i].size();j++){
                ans.push_back(positive[i][j]);
            }
        }
        return ans;
    }
    vector<int> verticalOrder(Node *root){
       return verticalorder(root);
    }
};
