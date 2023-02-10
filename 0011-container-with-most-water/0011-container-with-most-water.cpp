class Solution {
public:
    int maxArea(vector<int>& height) {
        int i,j;
        int max=0;
        for(i=0,j=height.size()-1;i!=j;){
            int c=(height[i]<height[j] ? height[i] : height[j])*(j-i);
            max=max<c?c:max;
            int d=height[i]<height[j] ? i++ : j--;
        }
        return max;
    }
};