///week05-1.cpp
///leetcode 學習計畫
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream  ss(s);
        string word;///字串
        ss >> word;
        while( ss >> word){///一直讀

        }
        cout << word;///做實驗,看讀到誰

        return word.length();
    }
};
