class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int beg=0,end=nums.size()-1;
        int mid=0;
        while(beg<end){
            mid=beg+(end-beg)/2;
            if(nums[mid]<nums[mid+1])
                beg=mid+1;
            else
            end=mid;
        }
        return beg;
    }
};