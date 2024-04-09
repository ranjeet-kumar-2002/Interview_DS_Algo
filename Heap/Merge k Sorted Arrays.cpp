//Merge k Sorted Arrays


class Solution{
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int K){  
        priority_queue<int,vector<int>,greater<int>>pq;
      for(int i =0;i<arr.size();i++){
            for(int j =0;j<arr[0].size();j++){
                pq.push(arr[i][j]);
            }
      }
      vector<int>ans;
      while(!pq.empty()){
            ans.push_back(pq.top());pq.pop();
      }
      return ans;
    }
};

**********************************************************************
class Solution{
    public:
    typedef pair<int,pair<int,int>>P;
    
    vector<int> mergeKArrays(vector<vector<int>> arr, int K){  
        
     priority_queue<P,vector<P>,greater<P>>pq;
     for(int i =0;i<K;i++){
          pq.push({arr[i][0],{i,0}}); // pq.push(make_pair(arr[i][0],make_pair(i,0)));
     }
     
     vector<int>ans;
      while(!pq.empty()){
           pair<int,pair<int,int>>top = pq.top(); pq.pop();
           ans.push_back(top.first);
           int i = top.second.first;
           int j = top.second.second;
           if(j+1<K){
                pq.push({arr[i][j+1],{i,j+1}});
           }
      }
      return ans;
      
    }
};
