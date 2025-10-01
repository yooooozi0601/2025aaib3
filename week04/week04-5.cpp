///week04-5.cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int N= digits.size();///先知道陣列長度,以便倒過來的迴圈
       for(int i=N-1;i>=0;i--){
            if(digits[i]==9) digits[i]=0;///進位,變成0
            else{///沒有進位,就是找到答案
                digits[i]++;///就+1後,沒有進位
                return digits;///找到答案了,送出去
       }
    }
    ///都沒找到答案,也就是9, 9, 9
    digits.insert(digits.begin(),1);
    return digits;
    }
};
