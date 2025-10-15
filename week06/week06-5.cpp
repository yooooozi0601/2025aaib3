///week06-5.cpp
///3350
///跟3349很像
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N= nums.size();///陣列的大小
        vector<int> left(N, 1);///左到右的combo
        vector<int> right(N, 1);///右到左的combo
        for(int i=1;i<N;i++){ ///左到右的combo逐一更新
            if( nums[i-1] < nums[i]) left[i] = left[i-1] + 1;
        }///如果有連續,就更新,變更大
        for(int i=N-2;i>=0;i--){///右到左的combo
            if( nums[i] < nums[i+1]) right[i] = right[i+1] + 1;
        }
        int ans=0;
        for(int i=0;i<N-1; i++){
            int now=min(left[i],right[i+1]);
            if(now>ans) ans=now;

        }
        return ans;
    }
};
