#week01-2.py Leetcode �ǲ߭p�e python�����G
#leetcode 28
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H=len(haystack)
        N=len(needle)
        #sadbutsad #�r�����
        #sad i:0   #�r�����
        #sad i:1
        #.....
        #    sad i:6
        for i in range(H-N+1): #����9 �����3 ��0...6�@�C��
            if haystack[i:i+N]==needle:#�Y��ӬۦP
            #��r��,�qi�}�l,����i+N���� �@N�Ӧr
                return i
        return -1
