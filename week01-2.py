#week01-2.py Leetcode 學習計畫 python版本二
#leetcode 28
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack)
        N=len(needle)
        #sadbutsad #字串長度
        #sad i:0   #字串長度
        #sad i:1
        #.....
        #    sad i:6
        for i in range(H-N+1): #長度9 找長度3 有0...6共七格
            if haystack[i:i+N]==needle:#若兩個相同
            #把字串,從i開始,取到i+N結束 共N個字
                return i
        return -1
