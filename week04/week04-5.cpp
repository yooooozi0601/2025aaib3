///week04-5.cpp
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int N= digits.size();///�����D�}�C����,�H�K�˹L�Ӫ��j��
       for(int i=N-1;i>=0;i--){
            if(digits[i]==9) digits[i]=0;///�i��,�ܦ�0
            else{///�S���i��,�N�O��쵪��
                digits[i]++;///�N+1��,�S���i��
                return digits;///��쵪�פF,�e�X�h
       }
    }
    ///���S��쵪��,�]�N�O9, 9, 9
    digits.insert(digits.begin(),1);
    return digits;
    }
};
