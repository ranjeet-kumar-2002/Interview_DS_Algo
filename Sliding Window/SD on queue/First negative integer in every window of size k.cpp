
// Test Cases Passed: 
// 10050 /10100
void store(vector<long long>&ans,queue<long long>q){
      bool flag = false;
      while(!q.empty()){
          if(q.front()<0){
              ans.push_back(q.front());
              flag = true;
              break;
          }
          q.pop();
      }
      if(flag==false) ans.push_back(0);
}
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                vector<long long>ans;
                queue<long long>q;
                for(int i =0;i<K;i++){
                    q.push(A[i]);
                }
                for(int i =K;i<=N;i++){
                    store(ans,q);
                    q.pop();
                    q.push(A[i]);
                }
                return ans;
 }
 *******************************************************************************
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                vector<long long>ans;
                queue<long long>q;
                for(int i =0;i<K-1;i++){
                   if(A[i]<0) q.push(i);
                }
                for(int i =K-1;i<N;i++){
                   if(A[i]<0) q.push(i);
                   if(q.empty()){
                       ans.push_back(0);
                   }else{
                       if(i-K>=q.front()) q.pop();
                       if(q.empty()){
                           ans.push_back(0);
                       }else {
                           ans.push_back(A[q.front()]);
                       }
                   }
                }
                return ans;
 }
