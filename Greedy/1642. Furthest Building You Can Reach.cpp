class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        priority_queue<int, vector<int>, greater<int>> pq; // min-heap to store the heights difference
        int i;
        for (i = 1; i < n-1; i++) {
            if (heights[i - 1] >= heights[i]) continue;
            int hh = heights[i] - heights[i - 1];
            pq.push(hh); // store the height difference in min-heap
            if (pq.size() > ladders) { // if we have more heights difference than ladders
                bricks -= pq.top(); // use bricks instead of ladder
                pq.pop(); // remove the smallest height difference
                if (bricks < 0) break; // if bricks become negative, we can't move forward
            }
        }
            //  cout<<pq.size(); always equal to no of ladders
        return i - 1; // return the last position where we could move forward
    }
};
