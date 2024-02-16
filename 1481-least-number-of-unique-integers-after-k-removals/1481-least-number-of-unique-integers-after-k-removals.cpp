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
        int n=frequency.size();
        int count=0;// this count we will remove from out frequency size to get final result
        sort(frequency.begin(),frequency.end());
        for(int i=0;i<frequency.size();i++){
            if(k<frequency[i])
                break;
            if(k>=frequency[i])
                {
                k-=frequency[i];
                count+=1;}
        }
        int result=n-count;
        return result;
        
        
    }
};