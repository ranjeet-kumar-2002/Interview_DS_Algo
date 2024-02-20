class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	   vector<int>temp(n,-1);
	   for(int i = 0;i<n-1;i++){
	       if(arr[i]>arr[i+1]) temp[i]=arr[i+1];
	       else continue;
	   }
	   
	   for(int i = 0;i<n;i++){
	       arr[i] = temp[i];
	   }
	}
};
