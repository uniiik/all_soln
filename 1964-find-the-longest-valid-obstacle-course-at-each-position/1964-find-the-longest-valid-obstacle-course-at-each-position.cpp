class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        int n=obstacles.size();
        vector<int> dp, res;
        for(int i=0;i<n;i++){
            int pos = upper_bound(dp.begin(), dp.end(), obstacles[i]) - dp.begin();
            if(pos == dp.size())
                dp.push_back(obstacles[i]);
            else
                dp[pos] = obstacles[i];
            res.push_back(pos+1);
        }
        return res;
    }
};
