*********************************************************************************************
class Solution{   
public:
    int bsf(int arr[],int n ,int x){
         int l = 0; int r = n-1;
         int ans = -1;
         while(l<=r){
              int mid = l+(r-l)/2;
              if(arr[mid]==x){
                   ans = mid;
                   r = mid-1;
              }else if(arr[mid]<x){
                    r= mid-1;
              }else l = mid+1;
         }
         return ans;
    }
    int bsl(int arr[],int n, int x){
         int l = 0; int r = n-1;
         int ans = -1;
         while(l<=r){
              int mid = l+(r-l)/2;
              if(arr[mid]==x){
                  ans = mid;
                  l = mid+1;
              }else if(arr[mid]<x){
                  r = mid-1;
              }else l = mid+1;
         }
         return ans;
    }
    int countZeroes(int arr[], int n) {
       int first = bsf(arr,n,0);
       int last = bsl(arr,n,0);
       if(first == -1 || last==-1) return 0;
       return last-first+1;
    }
};
