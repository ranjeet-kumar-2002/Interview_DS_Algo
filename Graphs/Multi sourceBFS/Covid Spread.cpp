
class Solution {
public:
    vector<vector<int>>dir = {{0,1},{1,0},{-1,0},{0,-1}};
    int helpaterp(vector<vector<int>> hospital){
       int m = hospital.size();
       int n = hospital[0].size();
       queue<pair<int,int>>q; // row,col of infected person
       for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(hospital[i][j]==2){
                    q.push({i,j});
                }
            }
       }
       int time = 0;
       while(!q.empty()){
            int size = q.size();
            int flag = false;
            for(int k = 0;k<size;k++){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                for(int d = 0;d<4;d++){
                     int newi = i+dir[d][0];
                     int newj = j+dir[d][1];
                     if(newi>=0 && newj>=0 && newi<m && newj<n){
                          if(hospital[newi][newj]==1) {
                              flag = true;
                              hospital[newi][newj]=2;
                              q.push({newi,newj});
                          }
                     }
                }
            }
            if(flag==true) time++;
            
       }
       
       bool flag = false;
       for(int i = 0;i<m;i++){
           for(int j = 0;j<n;j++){
               if(hospital[i][j]==1){
                   flag = true;
                   break;
               }
           }
       }
       if(flag == true) return -1;
       return time;
       
    }
};
