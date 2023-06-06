class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        bool flag= 1;
       int x1=coordinates[0][0];
        int y1=coordinates[0][1];
        int x2=coordinates[1][0];
        int y2=coordinates[1][1];
        
        for(int i=2;i<coordinates.size();i++){
            
            int x=coordinates[i][0];
            int y=coordinates[i][1];
            if( (x-x1)*(y-y2)!=(x-x2)*(y-y1))//we have taken in multiple because we maight face an zero error (y-y1)/(x-x1)!=(y-y2)(x-x2)
                return false;
        }
        
        return true;
        
        
        
    }
};