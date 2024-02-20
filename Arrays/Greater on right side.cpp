************Like that problem we can need to check from which direction we need to travese left or right***********************8
  
class Solution{
public:	
	void nextGreatest(int arr[], int n) {
	    vector<int>temp(n,-1);
	    int maxi = arr[n-1];
	    for(int i = n-2;i>=0;i--){
	      temp[i] =maxi;
	      maxi = max(arr[i],maxi);
	    }
	    for(int i = 0;i<n;i++){
	        arr[i] =temp[i];
	    }
	}
};
