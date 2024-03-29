

class Solution
{
    public:
    vector<int> levelOrder(Node* root){
      queue<Node*>q;
      q.push(root);
      vector<int>ans;
      while(!q.empty()){
           int size = q.size();
           for(int i = 0;i<size;i++){
               Node* temp = q.front();q.pop();
               ans.push_back(temp->data);
               if(temp->left) q.push(temp->left);
               if(temp->right) q.push(temp->right);
           }
           
      }
      return ans;
    }
};
**************************************************************************
class Solution
{
    public:
    vector<int> levelOrder(Node* root){
      queue<Node*>q;
      q.push(root);
      vector<int>ans;
      while(!q.empty()){
          Node* temp = q.front();q.pop();
          ans.push_back(temp->data);
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
      }
      return ans;
    }
};

