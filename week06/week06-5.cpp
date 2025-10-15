///week06-5.cpp
///3350
///��3349�ܹ�
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N= nums.size();///�}�C���j�p
        vector<int> left(N, 1);///����k��combo
        vector<int> right(N, 1);///�k�쥪��combo
        for(int i=1;i<N;i++){ ///����k��combo�v�@��s
            if( nums[i-1] < nums[i]) left[i] = left[i-1] + 1;
        }///�p�G���s��,�N��s,�ܧ�j
        for(int i=N-2;i>=0;i--){///�k�쥪��combo
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
