AP common diff should be same and sumofap = n/2(firstelement+lastelement) // no of elment ==n
  a,a+d,a+2d,a+3d....   diff = (first+last)/n; 

class Solution {
public:
    int findMissing(int arr[], int n) {
        int diff = (arr[n-1]-arr[0])/n;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] != diff) {
                return arr[i] + diff;
            }
        }
        return 0;
    }
};
