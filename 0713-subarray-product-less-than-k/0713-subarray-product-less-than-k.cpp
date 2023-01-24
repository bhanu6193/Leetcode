class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      int i,j;
      int prod=1;
      int count=0;
      for(i=0,j=0;j<nums.size();j++){
          prod=prod*nums[j];

              while(prod>=k && i<nums.size()){
                  prod=prod/nums[i];
                  i++;}
               if(prod<k){
              count+=(j-i+1);
          }
      
      }
      if(prod>=k)
      return 0;
      else 
      return count; 
      
    }
    
};