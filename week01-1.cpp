///Leetcode �ǲ߭p�e �j�����w  haystack ���needle
///#28
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///�n�άۦP,��Ҧ��i�઺��m��L�@��
        ///ex. sadbustsad �����L �n��sad
        /// i:0 sad �� haystack �Ŧ�N�Ӧr��
        ///     sad
        /// i:1 sad
        ///     abd
        /// i:2 sad
        ///     dbu
        int H=haystack.length(),N =needle.length();
        for(int i=0;i<=H-N;i++){
            if(haystack.substr(i,N)==needle) return i;
            ///�qi�}�l,�ťXN�Ӧr��,���M�ۦP ��쵪��
        }
        return -1;///�S����쵪��
    }
};
