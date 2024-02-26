//Min Subsets with Consecutive Numbers

class Solution{
    public:
    int numofsubset(int arr[], int n) {
       int count = 0;
        sort(arr,arr+n); // {5, 6, 7}, { 56, 57, 58}, {100, 101, 102, 103}
        for(int i =0;i<n-1;i++){ 
            if((arr[i+1]-arr[i])!=1) count++;
        }
        return count+1;
    }
};
