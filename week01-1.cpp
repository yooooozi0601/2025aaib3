///Leetcode 學習計畫 大海撈針  haystack 找到needle
///#28
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///要用相同,把所有可能的位置找過一次
        ///ex. sadbustsad 很難過 要找sad
        /// i:0 sad 把 haystack 剪成N個字母
        ///     sad
        /// i:1 sad
        ///     abd
        /// i:2 sad
        ///     dbu
        int H=haystack.length(),N =needle.length();
        for(int i=0;i<=H-N;i++){
            if(haystack.substr(i,N)==needle) return i;
            ///從i開始,剪出N個字母,竟然相同 找到答案
        }
        return -1;///沒有找到答案
    }
};
