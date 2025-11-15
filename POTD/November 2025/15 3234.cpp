class Solution {
public:
    int numberOfSubstrings(string s) {
        // int count=0;
        // for(int i=0;i<s.size()-1;i++){
        //     for(int j=i+1;j<s.size();j++){
        //         for(int k=i;k<=j;k++){
        //             int zero=0;
        //             int one=0;
        //             if(s[k]=='0')
        //             zero++;
        //             else if(s[k]=='1')
        //             one++;
        //             int p=pow(zero,2);
        //             if(one>0 && p<=one)
        //             count++;
                    
        //         }
        //     }
        // }
        // return count;
        // int n = s.size();
        // int count = 0;
        // for (int i = 0; i < n; i++) {
        //     int zero = 0, one = 0;
        //     for (int j = i; j < n; j++) {
        //         if (s[j] == '0') zero++;
        //         else one++;
        //         int p = zero * zero;
        //         if (p <= one)
        //             count++;
        //     }
        // }
        // return count;


        int n = s.size();
        vector<int> left(n + 1, 0);
        left[0] = -1;
        left[1] = 0;
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == '0') {
                left[i + 1] = i;
            } else {
                left[i + 1] = left[i];
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int zeroes = 0;
            if (s[i - 1] == '0') {
                zeroes++;
            }
            int j = i;

            while (zeroes * zeroes <= n && j > 0) {
                int ones = i - left[j] - zeroes;
                if(zeroes*zeroes<=ones){
                    ans+= min(j-left[j],ones-zeroes*zeroes+1);
                }
                j = left[j];
                zeroes++;
            }
        }

        return ans;
    }
};