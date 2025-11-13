class Solution {
public:
    int maxOperations(string s) {
        int ans = 0;
        int one = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                one++;
            } else if (i > 0 && s[i - 1] == '1') {
                ans += one;
            }
        }
        return ans;
        // int n=s.length();
        // int brk=0,count=0;
        // int ones=0,zero=0;
        // for(int i=0;i<n;i++){
        //     if(s[i]=='1')
        //     ones++;
        //     else
        //     zero++;
        // }
        // for(int i=n-1;i>0;i--){
        //     if(s[i]=='0' && s[i-1]=='1')
        //         brk++;

        // }
        // int ans=ones*(brk-1);
        // if(s[n-1]=='0' && ones==n-1)
        // return ones;
        // else if(brk==0)
        // return 0;
        // return ans;
    }
};