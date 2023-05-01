class Solution:
    def average(self, salary: List[int]) -> float:
        mini=min(salary)
        maxi=max(salary)
        sum=0
        for x in salary:
            sum+=x
        result=sum-mini-maxi
        ans=result/(len(salary)-2)
        return ans
        
        