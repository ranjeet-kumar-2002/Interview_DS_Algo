//Merge K sorted linked lists
class Solution{
  public:
    class compare{
        public:
        bool operator()(Node* a,Node*b){
             return a->data>b->data;
        }
    };
    Node * mergeKLists(Node *arr[], int K){
        priority_queue<Node*,vector<Node*>,compare>p(arr,arr+K);
        Node* root = new Node(0);
        Node* tail = root;
       
        while(!p.empty()){
              Node* temp = p.top(); p.pop();
             tail->next = temp;
             tail=tail->next;
             
            if(temp->next) p.push(temp->next);
        }
        return root->next;
    }
};
