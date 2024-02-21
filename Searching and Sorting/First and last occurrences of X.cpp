class Solution {
  public:
    int binaryfirst(int i,int j,vector<int>&arr,int n, int x){
        int fisrtIndx = -1;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(arr[mid]==x) {
                fisrtIndx = mid;
                j = mid-1;
            }else if(arr[mid]>x) j = mid-1;
            else i = mid+1;
        }
        return fisrtIndx;
    }
    
     int binarylast(int i,int j,vector<int>&arr,int n, int x){
        int lastIndx = -1;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(arr[mid]==x) {
                lastIndx = mid;
                i = mid+1;   // we can't write i = mid becasue it will cause infinte loop
            }else if(arr[mid]>x) j = mid-1;
            else i = mid+1;
        }
        return lastIndx;
    }
    
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        int i  = 0;
        int j  = n-1;
        int first = binaryfirst(i,j,arr,n,x);
        int last =  binarylast(i,j,arr,n,x);
        if(first ==-1 || last==-1) return {-1};
        return {first,last};
    }
};
