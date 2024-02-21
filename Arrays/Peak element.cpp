class Solution{
    public:
    int peakElement(int nums[], int n){
        int start =0;
        int end = n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(nums[mid]<nums[mid+1]){
                  start=mid+1;
            }else{
                end=mid;
            }
        }
        return start;
    }
};




