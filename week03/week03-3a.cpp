///week03-3a.cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;///1���W�����,��M�ܥ����
        for(int i=0; i<nums.size();i++){
            ans *=nums[i];
        }///�Ʀr�V���V�j�|�z��

        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;

    }
}
