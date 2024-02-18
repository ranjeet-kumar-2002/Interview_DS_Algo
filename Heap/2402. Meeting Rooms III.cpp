class Solution {
public:
    typedef pair<long long,int> p;
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        priority_queue<p,vector<p>,greater<p>>usedRooms; //{ending_time,room_no}
        priority_queue<long long, vector<long long>, greater<long long>> unusedRooms; //To store rooms that are used
        vector<int> roomsUsedCount(n, 0); //Each room is used 0 times in the beginning

        for(int room = 0;room<n;room++){  // pushing all room inialy
            unusedRooms.push(room);
        }

           for(auto &meet:meetings){
            int start = meet[0];
            int end =   meet[1];
            int duration = end-start;
                //First see, by this time, which rooms can be empty now
                //And move them to unusedRooms

                while(!usedRooms.empty() && usedRooms.top().first <= start) {
                long long room = usedRooms.top().second;
                usedRooms.pop();
                unusedRooms.push(room);
            }

            if(!unusedRooms.empty()) {
                int room = unusedRooms.top();
                unusedRooms.pop();
                usedRooms.push({end, room});
                roomsUsedCount[room]++;
            }else { //We don't have any room available now. Pick earliest end room
                int room  = usedRooms.top().second;
                long long endTime = usedRooms.top().first;
                usedRooms.pop();
                usedRooms.push({endTime + (end-start), room});
                roomsUsedCount[room]++;
            }
        }

        int indx = -1;
        int maxi =INT_MIN;
        for(int i = 0;i<n;i++){
            if(roomsUsedCount[i]>maxi){
                maxi = roomsUsedCount[i];
                indx = i;
            }
        }
        return indx;
    }
};
