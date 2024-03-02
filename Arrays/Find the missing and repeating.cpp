//M1 sort the given array
// M2 use map 
// M3 using math sum of the given array and nature sum take difference then sum
//of square of given nums and sum of square of the nature number then take difference

//M4 marking the negative with the help of value and index
//M5 using bit manipulation
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
       vector<int>ans;
       for(int i =0;i<n;i++){
           int x  = abs(arr[i])-1;
           if(arr[x]>0){
               arr[x] = -arr[x];
           }else{
               ans.push_back(x+1);
           }
           
       }
       
       for(int i =0;i<n;i++){
           if(arr[i]>0) ans.push_back(i+1);
       }
       return ans;
    }
};
