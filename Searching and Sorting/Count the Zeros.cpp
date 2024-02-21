class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int count = 0;
        for(int i =0;i<n;i++){
            if(arr[i]==0) count++;
        }
        return count;
    }
};

Count the Zeros


class Solution{   
public:
    int countZeroes(int arr[], int n) {
      int count = 0;
      for(int i = n-1;i>=0;i--){
          if(arr[i]==0) count++;
      }
      return count;
    }
};
