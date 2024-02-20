class Solution
{
    public:
    queue<int> modifyQueue(queue<int> q, int k) {
       int lastk = q.size()-k;
       stack<int>st;
       while(k--){
           st.push(q.front()); q.pop();
       }
       while(!st.empty()){
           q.push(st.top()); st.pop();
       }
       while(lastk--){
           q.push(q.front()); q.pop();
       }
       return q;
    }
};
