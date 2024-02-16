class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> umap;
        for(int i=0;i<arr.size();i++){
            umap[arr[i]]+=1;
        }
        vector<int> frequency;
        for(auto x:umap){
            frequency.push_back(x.second);
        }
        sort(frequency.begin(),frequency.end());
       
        int count=0;
        
        for(int i=0;i<frequency.size();i++){
            if(k<frequency[i])
            {frequency[i]-=k;
                k=0;}
            if(k>=frequency[i])
                {
                k-=frequency[i];
                frequency[i]=-1;}
            
            
            
            if(frequency[i]!=-1)
                count++;
        }
      
        return count;
        
    }
};