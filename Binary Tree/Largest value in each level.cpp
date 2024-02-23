
//Largest value in each level

class Solution{
    public:
    vector<int> largestValues(Node* root){
        queue<Node*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            int size = q.size();
            int maxi = INT_MIN;
            for(int i =0;i<size;i++){
                Node* temp = q.front();q.pop();
                if((temp->data)>maxi){
                    maxi = temp->data;
                }
                if(temp->left) q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};
