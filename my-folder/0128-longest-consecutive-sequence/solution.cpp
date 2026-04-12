class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        int longest = 0;
        for(auto it:set){
            if(set.count(it-1)==0){
                int current = it;
                int length = 1;
                while(set.count(current+1)){
                    current++;
                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};
