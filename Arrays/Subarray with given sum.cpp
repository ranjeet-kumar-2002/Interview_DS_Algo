 #include <vector>

class Solution {
public:
    std::vector<int> subarraySum(std::vector<int> arr, int n, long long s) {
        int i = 0;
        int j = 0;
        int sum = 0;
        while (j < n ) {
            sum += arr[j];
            while (sum > s && i < j) {
                sum -= arr[i];
                i++;
            }
            if (sum == s) return {i + 1, j + 1};
            j++;
        }
        return {-1};
    }
};
