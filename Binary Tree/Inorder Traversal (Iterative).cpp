//Inorder Traversal (Iterative)

class Solution {
public:
    vector<int> inOrder(Node* root){
      stack<Node*>st;
      stack<bool>visited;
      visited.push(false);
      st.push(root);
      vector<int>ans;
      while(!st.empty()){
          Node* temp = st.top();st.pop();
          bool check = visited.top();visited.pop();
          if(check==false){
              if(temp->right) {
                  st.push(temp->right);
                  visited.push(false);
              }
              st.push(temp);
              visited.push(true);
              if(temp->left) {
                  st.push(temp->left); 
                  visited.push(false);
              }
          }else{  // check==1
            ans.push_back(temp->data);
          }
      }
      
      return ans;
    }
};
