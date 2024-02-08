// 1475. Final Prices With a Special Discount in a Shop exact same as next smaller element from right//
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        vector<int>ans = prices;
        for(int i = 0;i<prices.size();i++){
            while(st.size()>0 && prices[st.top()]>=prices[i]){
                ans[st.top()] = prices[st.top()]-prices[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
