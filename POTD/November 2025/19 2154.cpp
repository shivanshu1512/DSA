class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        int found = 0;
        while (true) {
            found = 0;
            for (int i = 0; i < n; i++) {
                if (nums[i] == original) {
                    found = 1;
                    original = 2 * original;
                    break;   
                }
            }
            if (found == 0) {
                break;
            }
        }
        return original;
        // int n=nums.size();
        // int found=0;
        // while(found==0){
        // int x=2*original;
        // for(int i=0;i<n;i++){
        //     if(x==nums[i])
        //     original=x;
        //     else{
        //         found=1;
        //     break;
        //     }

        // }
        // }
        // return original;
    }
};