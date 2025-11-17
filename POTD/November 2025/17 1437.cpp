class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last = -1; 
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                if(last != -1 && i - last - 1 < k)
                    return false;
                
                last = i;
            }
        }
        return true;
        // int n=nums.size();
        // int count=0;
        // bool ans=true;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0)
        //     count++;
        //     else{
        //         if(count>=k)
        //         count=0;
        //         else{
        //             ans=false;
        //             break;
        //         }
        //     }
        // }
        // return ans;
    }
};