class Solution {
public:
    void dfs(int node, vector<int> &visited,vector<vector<int>>isConnected){
        visited[node]=1;//mark the number as visited
            
            
       for(int i=0;i<isConnected[0].size();i++)//checking all the neighbours of that particular node
       {
            if(isConnected[i][node]==1 &&   visited[i]==0){
                visited[i]=1;
                dfs(i,visited,isConnected);}
        }  
    
    
    
    
    
    
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int count=0;
        int n=isConnected[0].size();
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            
            if(visited[i]==0){
                dfs(i,visited,isConnected);
                count++;}
            
        }
        
        
        return count;
        
        
        
    }
};
/*
so mainly here we are first running a for loop form i =0 to i< isConnected[0].size().....
and we are checking whether the index position in visited array is 0 or 1
if the position is indicationg 0 means it has not been visited once so we will just call dfs on that node
now dfs call we do its work and check all the connected elemnts to it
once all the connected elemnts to that node has been completed then we will just increase the counter variable by 1
and in last return count
*/