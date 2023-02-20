class Solution {
public:
    
    
    
    void dfs(vector<vector<int>>& graph,vector<vector<int>>& ans,vector<int> path,int curr)
    {
        path.push_back(curr);
        
        if(curr==graph.size()-1)//means we have reached to the last element
        {
            ans.push_back(path);
        }
        else
        {
            for(auto x:graph[curr])
            {
                dfs(graph,ans,path,x);
            }
        }
            
            
            
            
        path.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        
        dfs(graph,ans,path,0);//0 bz it is  initial vertex
        
        return ans;
    }
};
/*
we are using dfs approach
first we will push 0 in path vector and then apply dfs on it means 0 will call the next element , while calling if we reach at the end vertex then we will push path vector into ans vector
otherwise until we dont reach the end we will call dfs of that element 
if both of things happened alreay and there is no chance to move forward then we will pop element
*/