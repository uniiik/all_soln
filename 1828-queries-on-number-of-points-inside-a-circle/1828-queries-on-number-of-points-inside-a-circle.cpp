class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        int distx,disty,dist;
        int count=0;
        for(int i=0;i<queries.size();i++)
        {
            count=0;
            int centerx=queries[i][0];
            int centery=queries[i][1];
            int radii=queries[i][2];
            int radius=radii*radii;
            
            
            for(int j=0;j<points.size();j++)
            {
                 distx=(centerx-points[j][0])*(centerx-points[j][0]);
                disty=(centery-points[j][1])*(centery-points[j][1]);
                dist=distx+disty;
                if(radius>=dist)
                {
                    count++;
                }
                
            }
            ans.push_back(count);
            
            
            
        }
        
        return ans;
    }
};