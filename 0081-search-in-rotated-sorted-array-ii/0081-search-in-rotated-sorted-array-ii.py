class Solution:
    def search(self, nums: List[int], target: int) -> bool:
        low=0
        high=len(nums)-1
        nums.sort()
        return self.binary_search(nums,low,high,target)
        
        
        
    def binary_search(self,arr,low,high,target):
        if high>=low:
            mid=(low+high)//2
            
            if arr[mid]==target:
                return 1
            elif arr[mid]>target:
                return self.binary_search(arr,low,mid-1,target)
            else:
                return self.binary_search(arr,mid+1,high,target)
        else:
            return 0