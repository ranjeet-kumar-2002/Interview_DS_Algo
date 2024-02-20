class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
       long long maxi = INT_MIN;
       long long mini = INT_MAX;
       for(int i = 0;i<n;i++){
           maxi = max(maxi,a[i]);
           mini = min(mini,a[i]);
       }
       pair<long long,long long>p;
       p={mini,maxi};
       return p;
    }
};
