class Solution
{
   public:
    int findSum(int A[], int N){
       int mini = INT_MAX;
       int maxi = INT_MIN;
       for(int i = 0;i<N;i++){
            mini = min(mini,A[i]);
            maxi = max(maxi,A[i]);
       }
       return mini+maxi;
    }
};

N = 5
A[] = {-2, 1, -4, 5, 3}
