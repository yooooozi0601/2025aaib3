///week03-4b.cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0) nums[k++]= nums[i];
        }///�����O0���� �����ƥ� ��쵪�ת�����

        for(int i=k; i<nums.size();i++){///�A���@��
            nums[i] =0;///����,��0����
        }

    }
};
