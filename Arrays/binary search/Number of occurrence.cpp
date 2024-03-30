class Solution{
public:	
    int bsf(int arr[],int n,int x){
         int l = 0;
         int r = n-1;
         int ans = -1;
         while(l<=r){
              int mid = l+(r-l)/2;
              if(arr[mid]==x){
                   ans = mid;
                   r = mid-1;
              }else if(arr[mid]<x){
                    l = mid+1;
              }else r = mid-1;
         }
         return ans;
    }
    int bsl(int arr[],int n,int x){
         int l = 0;
         int r = n-1;
         int ans = -1;
         while(l<=r){
              int mid = l+(r-l)/2;
              if(arr[mid]==x){
                   ans = mid;
                   l = mid+1;
              }else if(arr[mid]<x){
                    l = mid+1;
              }else r = mid-1;
         }
         return ans;
    }
	int count(int arr[], int n, int x) {
	   int first = bsf(arr,n,x);
	   int last =  bsl(arr,n,x);
	   if(first ==-1 || last == -1) return 0;
	    return last-first+1;
	}
};
