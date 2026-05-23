class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0,maxCount = 0;
        for(auto i : nums){
            if(i==0){
                count=0;
            }else{
                count++;
            }
            maxCount = max(count,maxCount);
        }
        return maxCount;
        
    }
};
