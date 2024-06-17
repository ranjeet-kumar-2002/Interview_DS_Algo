// 841_Keys_and_Rooms.cpp
// DFS and BFS of Keys and rooms problem implemented
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(vector<vector<int>> &rooms, vector<bool> &visited, int i = 0)
    {
        visited[i] = true;

        for (auto key : rooms[i])
        {
            if (!visited[key])
            {
                dfs(rooms, visited, key);
            }
        }
    }

    void bfs(vector<vector<int>> &rooms, vector<bool> &visited, int i = 0)
    {
        visited[i] = true;

        queue<int> q;
        q.push(i);
        while (!q.empty())
        {
            int key = q.front();
            q.pop();
            for (auto x : rooms[key])
            {
                if (!visited[x])
                {
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int n = rooms.size();
        vector<bool> visited(n, false);

        dfs(rooms, visited);
        // bfs(rooms, visited);

        for (auto x : visited)
        {
            if (!x)
                return false;
        }
        return true;
    }
};