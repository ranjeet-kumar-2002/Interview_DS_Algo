class Solution{
	public:
	bool check_elements(int arr[], int n, int A, int B)	{
       for(int i =A;i<=B;i++){
           int value  = i;
           bool flag = false;
           for(int j = 0;j<n;j++){
               if(i==arr[j]){
                   flag = true;
                   break;
               }
           }
           if(flag==false) return false;
       }
       return true;
	}
};
	Elements in the Range
