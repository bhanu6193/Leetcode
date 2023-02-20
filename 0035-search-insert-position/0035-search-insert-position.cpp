class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int b=0;
        int e=nums.size()-1;
        int mid;
        while(b<=e){
            mid=(b+e)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]>target)
                e=mid-1;
            else
                b=mid+1;    
        }
        return b;

    }
    
};