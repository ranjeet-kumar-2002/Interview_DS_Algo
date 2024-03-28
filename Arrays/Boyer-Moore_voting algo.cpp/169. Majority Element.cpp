// assume first element as ans ans set count =1
// if same element comes the increase the count else decrease by 1
// if count bwcame zero then set the assume element another element ans set the count as 1
// at the we can verify also with the ME
class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int me = nums[0];
         int count = 1;
         for(int i =1;i<nums.size();i++){
             if(me==nums[i]) count++;
             if(me !=nums[i]) count--;
             if(count == 0){
                 me = nums[i];
                 count = 1;
             }
         }
      return me;
    }
};


// // assume first element as ans ans set count =1
// // if same element comes the increase the count else decrease by 1
// // if count bwcame zero then set the assume element another element ans set the count as 1
// // at the we can verify also with the ME
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//          int me = nums[0];
//          int count = 1;
//          for(int i =1;i<nums.size();i++){
//              if(me==nums[i]) count++;
//              if(me !=nums[i]) count--;
//              if(count == 0){
//                  me = nums[i];
//                  count = 1;
//              }
//          }
//         // verification
//         count = 0;
//         for(int i = 0;i<nums.size();i++){
//              if(me==nums[i]) count++;
//         }
//         if(nums.size()/2<count) return me;
//         return 0;
//     }
// };

***************************************************
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n = nums.size();
//         return nums[n/2];
//     }
// };
*****************************************************
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//        unordered_map<int,int>mp;
//        for(auto &x:nums) mp[x]++;
//        int y = nums.size()/2;
//        for(auto &x:mp){
//            if(x.second>y) return x.first;
//        }
//        return 0;
//     }
// };
