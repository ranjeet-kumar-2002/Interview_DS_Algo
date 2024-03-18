//452. Minimum Number of Arrows to Burst Balloons
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
         sort(points.begin(),points.end());
         int prev = 0;
         int curr = 1;
         int count = 0;
         while(curr<points.size()){
                vector<int>p = points[prev];
                vector<int>c = points[curr];
                if(points[curr][0]>points[prev][1]){ // not overlap
                      count++;
                      prev = curr;
                }else{ // overlapping
                      int maxi = max(points[curr][0],points[prev][0]);
                      int mini = min(points[curr][1],points[prev][1]);
                      points[prev][0] = maxi;
                      points[prev][1] = mini;
                }
                curr++;
         }
         return count+1;
    }
};
