
class Solution {
public:
    int remove_duplicate(int a[], int n) {
        std::vector<int> nums(a, a + n); // Convert array to vector
        
        // Sort the vector to bring duplicate elements together
        std::sort(nums.begin(), nums.end());
        
        // Use unique() function to rearrange the vector so that duplicates are at the end
        auto last = std::unique(nums.begin(), nums.end());
        
        // Resize the vector to remove the duplicates
        nums.resize(std::distance(nums.begin(), last));
        
        // Copy the unique elements back to the array
        std::copy(nums.begin(), nums.end(), a);
        
        return nums.size(); // Return the size of the modified vector
    }
};

**************************** using set data structure*******************************
  class Solution{
public:
    int remove_duplicate(int a[],int n){
       set<int>st;
       for(int i=0;i<n;i++) {
           st.insert(a[i]);
       }
       int j = 0;
       for(auto&x:st){
           a[j] = x;
           j++;
       }
       return j;
    }
};

**************************** using constant extra space and O(n)*******************************

  class Solution{
public:
    int remove_duplicate(int a[],int n){
     int i = 0;
     int j = 1;
     while(j<n){
         if(a[i]!=a[j]){
             i++;
             a[i] = a[j];
         }else j++;
     }
     return i+1;
    }
};
