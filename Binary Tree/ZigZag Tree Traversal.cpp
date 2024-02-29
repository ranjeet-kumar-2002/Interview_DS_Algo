//ZigZag Tree Traversal
class Solution{
    public:
    vector <int> zigZagTraversal(Node* root){
    if(!root) return {};
     stack<Node*>st1;
     stack<Node*>st2;
     st1.push(root);
     vector<int>ans;
     while(st1.size() || st2.size()){
          while(st1.size()){
              Node* temp1 = st1.top();st1.pop();
              ans.push_back(temp1->data);
              if(temp1->left){
                  st2.push(temp1->left);
              }
               if(temp1->right){
                  st2.push(temp1->right);
              }
          }
          while(st2.size()){
              Node* temp2 = st2.top();st2.pop();
              ans.push_back(temp2->data);
              if(temp2->right) {
                  st1.push(temp2->right);
              }
              if(temp2->left) {
                  st1.push(temp2->left);
              }
          }
     }
     return ans;
    }
};
