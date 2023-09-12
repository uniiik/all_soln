class Solution:
    @staticmethod
    def function(index,arr,target,temp,result):
        if index==len(arr):
            if target==0:
                result.append(temp[:])
            return
        
        
        
        
        # to pick the number at given index posn
        if (arr[index]<=target):
            temp.append(arr[index])
            Solution.function(index,arr,target-arr[index],temp,result)
            temp.pop()
            
        
        
        Solution.function(index+1,arr,target,temp,result)
        
  
        
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        temp=[]
        result=[]
        Solution.function(0,candidates,target,temp,result)
        return result
        