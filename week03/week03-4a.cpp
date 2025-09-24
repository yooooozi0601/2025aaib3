///week03-4a.cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;///偷偷先塞答案,在塞回去 nums
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0)ans.push_back(nums[i]);
        }///有不是0的數 偷偷備份 塞到答案的答案
        for(int i=0; i<nums.size();i++){///再巡一次
            if(i<ans.size()) nums[i] = ans[i];
            else nums[i] =0;///之後,塞0的值
        }

    }
};
