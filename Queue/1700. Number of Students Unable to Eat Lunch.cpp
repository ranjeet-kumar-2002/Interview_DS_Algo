//1700. Number of Students Unable to Eat Lunch
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> st;
        
        // Initialize queue and stack
        for(int i = 0; i < students.size(); i++) 
            q.push(students[i]);
        for(int i = sandwiches.size()-1; i >= 0; i--) 
            st.push(sandwiches[i]);
        
        int count = 0;
        while (!q.empty() && !st.empty()) {
            if (q.front() == st.top()) {
                q.pop();
                st.pop();
                count = 0; // Reset count when a student gets their preferred sandwich
            } else {
                // Move student who couldn't get their preferred sandwich to the end of the queue
                int f = q.front();
                q.pop();
                q.push(f);
                count++;
                // If all students have been checked and none got their preferred sandwich, stop the loop
                if (count == q.size()) 
                    break;
            }
        }
        
        return q.size();
    }
};


#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> st;
        
        for(int i = 0; i < students.size(); i++) 
            q.push(students[i]);
        for(int i = sandwiches.size()-1; i >= 0; i--) 
            st.push(sandwiches[i]);
        
        int count = 0;
        while (!q.empty() && !st.empty()) {
            if (q.front() == st.top()) {
                q.pop();
                st.pop();
                count = 0; // Reset count when a student gets their preferred sandwich
            } else {
                // Move student who couldn't get their preferred sandwich to the end of the queue
                int f = q.front();
                q.pop();
                q.push(f);
                count++;
                // If all students have been checked and none got their preferred sandwich, stop the loop
                if (count == q.size()) 
                    break;
            }
        }
        return q.size();
    }
int main(){
    int n1;
    cin>>n1;
    vector<int>arr1(n1);
    vector<int>arr2(n1);
    for(int i =0;i<n1;i++) cin>>arr1[i];
    for(int i =0;i<n1;i++) cin>>arr2[i];
    cout<<countStudents(arr1,arr2)<<endl;
    return 0;
}

//  students = [1,1,0,0], sandwiches = [0,1,0,1]
// Output: 0 
