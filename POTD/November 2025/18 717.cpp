class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        bool ans;
        while(i<bits.size())
        {
            if(bits[i]==1)
            {
                i=i+2;
                ans=false;
            }
            else
            {
                i=i+1;
                ans=true;
            }
        }
        return ans;

        // if(bits[n-1]==0 && bits[n-2]==0)
        // return true;
        // return false;
    }
};