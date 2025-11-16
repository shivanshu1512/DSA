class Solution {
public:
    int numSub(string s) {
        const long long MOD = 1000000007;  
        long long ans = 0;
        long long count1 = 0;
        for (char ch : s) {
            if (ch == '1') {
                count1++;
                ans = (ans + count1) % MOD;
            } else {
                count1 = 0;
            }
        }
        return ans; // n*n+1/2 also a formula which we can apply
        
    }
};