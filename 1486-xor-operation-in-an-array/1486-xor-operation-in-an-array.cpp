class Solution {
public:
    int xorOperation(int n, int start) {
        int a[n];
        for(int i = 0;i<n;i++){
            int c=start+2*i;
            a[i]=c;
        }
        int sum=0;
        for(int i = 0;i<n;i++){
            sum=sum^a[i];

        }
        return sum;
        
    }
};