// school(place value) me para tha 12345 increasing order if we want to make smallest number {1,2,3,4,5,6}
// increasing order
// delete k element from left to right
// we can use string == stack, queue,deque 
// increasing,deacresing,non-increasing,non-decreasing then we cac call monotonic string = stack, queue,deque 
//402. Remove K Digits

class Solution {
public:
    string removeKdigits(string num, int k) {
        int i = 0, n = num.size();
        // Remove all digits from num
        if (n == k) return "0";

        // Stack implementation using string data structure to allocate memory efficiently.
        string st = "";
        while(k--){
            while(i < n and (st.empty() || st.back() <= num[i])){
                // Push elements in monotonically increasing stack
                st.push_back(num[i++]);
            }

            // Pop when top of stack is greater than current element of num
            if(!st.empty()) st.pop_back();

            // Skip leading zeros ONLY
            while(i < n && num[i] == '0' && st.empty())  i++;
        }

        // Get remaining string
        string last = "";
        if (i < n) last = num.substr(i, n - i);

        // Concatenate both the strings and return answer
        st = st + last;
        return st.empty() ? "0" : st;
    }
};
