class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>Right(n,n);
        stack<int>st1;
        stack<int>st2;
        vector<int>Left(n,-1);
        // Next Smaller Element from right
         for(int i =0;i<n;i++){
             while(st1.size()>0 && heights[st1.top()]>heights[i]){
                 Right[st1.top()] = i;
                 st1.pop();
             }
             st1.push(i);
         }        

        // Next Smaller Element from left 

         for(int i =n-1;i>=0;i--){
             while(st2.size()>0 && heights[st2.top()]>heights[i]){
                 Left[st2.top()] = i;
                 st2.pop();
             }
             st2.push(i);
         }       

         int ans = INT_MIN;
         for(int i = 0;i<n;i++){
             ans = max(ans,heights[i]*(Right[i]-Left[i]-1));
         } 
         return ans;
    }
};

//************************************little diffrent method for filling the NSL and NSR ************************************************************

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>Right(n);
        stack<int>st1;
        stack<int>st2;
        vector<int>Left(n);
        // Next Smaller Element from right
         for(int i =0;i<n;i++){
             while(st1.size()>0 && heights[st1.top()]>heights[i]){
                 Right[st1.top()] = i;
                 st1.pop();
             }
             st1.push(i);
         }        

        while(!st1.empty()){  // filling the empty vector in the Right
            Right[st1.top()] = n;
            st1.pop();
        }
        // Next Smaller Element from left 

         for(int i =n-1;i>=0;i--){
             while(st2.size()>0 && heights[st2.top()]>heights[i]){
                 Left[st2.top()] = i;
                 st2.pop();
             }
             st2.push(i);
         }       

            while(!st2.empty()){  // filling the empty vector in the Left
            Left[st2.top()] = -1;
            st2.pop();
        }

         int ans = INT_MIN;
         for(int i = 0;i<n;i++){
             ans = max(ans,heights[i]*(Right[i]-Left[i]-1));
         } 
         return ans;
    }
};
