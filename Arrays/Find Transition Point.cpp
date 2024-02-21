Find Transition Point

class Solution{
public:    
    int transitionPoint(int arr[], int n) {
        int i;
        for(int i =0;i<n;i++){
            if(arr[i]==1) return i;
        }
        return -1;
    }
};
