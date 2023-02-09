class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        a=[]
        b=[]
        k=k%len(nums)
        l=len(nums)
        temp=[]
        a=nums[l-k:]
        nums[l-k:]=nums[:l-k]
        nums[:l-k]=a
        print(a,b)
        # nums=a+b
        # return meow     