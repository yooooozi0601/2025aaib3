///week03-3a.cpp
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;///1乘上任何數,突然變任何數
        for(int i=0; i<nums.size();i++){
            ans *=nums[i];
        }///數字越乘越大會爆炸

        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;

    }
}
