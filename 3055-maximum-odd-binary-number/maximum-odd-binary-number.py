class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        one = ""
        zero = ""
        for i in s:
            if i=='1':
                one+=i
            else:
                zero+=i
        return one[:-1]+zero+one[-1]