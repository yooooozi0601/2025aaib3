///week05-1.cpp
///leetcode �ǲ߭p�e
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream  ss(s);
        string word;///�r��
        ss >> word;
        while( ss >> word){///�@��Ū

        }
        cout << word;///������,��Ū���

        return word.length();
    }
};
