///week03-4a.cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;///�������뵪��,�b��^�h nums
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0)ans.push_back(nums[i]);
        }///�����O0���� �����ƥ� ��쵪�ת�����
        for(int i=0; i<nums.size();i++){///�A���@��
            if(i<ans.size()) nums[i] = ans[i];
            else nums[i] =0;///����,��0����
        }

    }
};
