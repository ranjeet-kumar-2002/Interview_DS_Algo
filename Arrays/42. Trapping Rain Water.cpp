//42. Trapping Rain Water
// ans = min(leftmax[i],rightmax[i])-height[i]

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftmax(n,0);
        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
             maxi = max(maxi,height[i]);
             leftmax[i] = maxi;
        }
         vector<int>rightmax(n,0);
          maxi = INT_MIN;
        for(int i =n-1;i>=0;i--){
             maxi = max(maxi,height[i]);
             rightmax[i] = maxi;
        }
        int ans = 0;
        for(int i =0;i<n;i++){
            int mini =min(leftmax[i],rightmax[i]);
            ans = ans+(mini-height[i]);
        }
        return ans;
    }
    int main(){
        int n;cin>>n;
        vector<int>height(n);
        for(int i =0;i<n;i++){
             cin>>height[i];
        }
        cout<<trap(height);
    }
