class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ans=""
        i=0
        j=0
        while i<len(word1) and j<len(word2):
            ans=ans+word1[i]
            i=i+1
            ans=ans+word2[j]
            j=j+1
        if len(word1)>len(word2):
            ans=ans+word1[len(word2):]
            return ans
        if len(word1)<len(word2):
            ans=ans+word2[len(word1):]
            return ans
        return ans
        