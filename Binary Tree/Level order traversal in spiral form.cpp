//Level order traversal in spiral form

vector<int> findSpiral(Node *root){
   if(!root) return {};
   vector<int>ans;
   stack<Node*>st1,st2;
   st1.push(root);
   while(st1.size() || st2.size()){
        while(st1.size()){
            Node* temp1 = st1.top();st1.pop();
            ans.push_back(temp1->data);
            if(temp1->right) st2.push(temp1->right);
            if(temp1->left) st2.push(temp1->left);
        }
        while(st2.size()){
             Node* temp2 = st2.top();st2.pop();
             ans.push_back(temp2->data);
             if(temp2->left) st1.push(temp2->left);
             if(temp2->right) st1.push(temp2->right);
        }
   }
   return ans;
}
