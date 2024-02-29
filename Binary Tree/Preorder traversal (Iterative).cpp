//Preorder traversal (Iterative)

class Solution{
    public:
    vector<int> preOrder(Node* root){
      stack<Node*>st;
      st.push(root);
      vector<int>ans;
      while(!st.empty()){
          Node* temp = st.top();st.pop();
          ans.push_back(temp->data);
          if(temp->right) st.push(temp->right);
          if(temp->left) st.push(temp->left);
      }
      return ans;
    }
};
