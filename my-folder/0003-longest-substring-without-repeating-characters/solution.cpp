class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> ump;
        int left = 0, maxWindowSize = 0;
        for (int right = 0; right < s.size(); right++) {
            ump[s[right]]++;
            while(ump[s[right]]>1){
                ump[s[left]]--;
                left++;
            }
            maxWindowSize = max(maxWindowSize , right-left+1);
        }
        return maxWindowSize;
    }
};
