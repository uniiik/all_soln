class Solution:
    def findLongestChain(self, pairs: List[List[int]]) -> int:
        if len(pairs)==0:
            return 0
        li=sorted(pairs,key=lambda x:x[1])
        cnt=1
        end=li[0][1]
        
        for i in li:
            if i[0]>end:
                cnt+=1
                end=i[1]
                
        return cnt
        
        