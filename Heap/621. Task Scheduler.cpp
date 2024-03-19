//621. Task Scheduler
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>mp(26,0);
        for(int i = 0;i<tasks.size();i++){
            mp[tasks[i]-'A']++;
        }
        sort(mp.begin(),mp.end());
        int chunk = mp[25]-1;
        int idle = chunk*n;
        for(int i = 24;i>=0;i--){
             idle = idle-min(mp[i],chunk);
            // if(mp[i]==0) break;
        }
        return idle<0 ? tasks.size():idle+tasks.size();
    }
};
