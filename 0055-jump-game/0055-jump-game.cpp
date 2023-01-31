class Solution {
public:
    bool canJump(vector<int>& nums) {
        int rindex=0;

        for(int i=0;i<nums.size();i++){
            if(rindex<i)
            return false;
            if(nums[i]+i>rindex)
            rindex=nums[i]+i;
        }
        return true;
    }
};