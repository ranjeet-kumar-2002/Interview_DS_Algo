#include<algorithm>
#include<unordered_set>

using namespace std;
int peak(vector<int>&nums){
     int l =1;
     int r = nums.size()-2;
     while(l<=r){
          int mid = l+(r-l)/2;
      if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
      else if(nums[mid]>nums[mid-1]) l = mid+1;
      else r = mid-1;
     }
     return -1;
}
int main(){
     int n;cin>>n;
     vector<int>nums(n);
     for(int i =0;i<n;i++) cin>>nums[i];
     cout<<peak(nums);
     return 0;
}


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0;
        int r = arr.size()-1;
        while(l<=r){
            int mid = r+(l-r)/2; // int mid = l+(r-l)/2; // dryrun 1 6 3 2 1 ??????????????????????????????????????????????
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]>arr[mid-1]){
                l = mid+1;
            }else {
                r = mid-1;
            }
        }
        return -1;
    }
};


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 1;
        int r = arr.size()-2;
        while(l<=r){
            int mid = l+(r-l)/2; // dryrun 1 6 3 2 1
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]>arr[mid-1]){
                l = mid+1;
            }else {
                r = mid-1;
            }
        }
        return -1;
    }
};
