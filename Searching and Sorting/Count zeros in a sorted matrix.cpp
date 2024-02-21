class Solution{
public:
	int countZeros(vector<vector<int>>A){
	  int count = 0;
	  int m = A.size();
	  int n = A[0].size();
	  for(int i = 0;i<m;i++){
	      for(int j = 0;j<n;j++) {
	          if(A[i][j]==0) count++;
	      }
	  }
	  return count;
	}
};

Count zeros in a sorted matrix
