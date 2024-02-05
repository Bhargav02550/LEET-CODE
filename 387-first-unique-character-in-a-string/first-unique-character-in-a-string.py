class Solution:
    def firstUniqChar(self, s: str) -> int:
        f=-1
        for i in range(0,len(s)):
            if s.count(s[i])==1:
                f=i
                break
        if(f==-1):
            return f
        return f