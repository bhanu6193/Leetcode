class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int n=arr.size();
       int i=0;
       for(i;i<(n-n/4);i++){
           if(arr[i]==arr[i+n/4])
           return arr[i];
       }
       return arr[i];
    }
};