class Solution {
public:
    bool isPalindrome(int x) {
        long int sum=0;
        int p=x;
        while(p>0){
            int r = p%10;
            sum=sum*10+r;
            p=p/10;
        }
        int a=(sum==x)?true:false;
        return a;
    }
};