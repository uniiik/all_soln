class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> visited(n,false);
        queue<int> q;
        visited[0]=true;
        q.push(0);
        
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            
            for(auto key:rooms[curr])
            {
                if(!visited[key])
                {
                    visited[key]=true;
                    q.push(key);}
            }
        }
        
        for(auto x:visited)
        {
            if(!x)
                return x;
        }
        return true;
        
    }
};