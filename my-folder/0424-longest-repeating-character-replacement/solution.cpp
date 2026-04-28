class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0 , r = 0 , maxLen = 0 , maxF = 0;
        unordered_map<char,int>ump;
        for(r = 0 ; r < s.size() ; r++){
            ump[s[r]]++;
            maxF = max(maxF,ump[s[r]]);
            while((r-l+1) - maxF > k){
                ump[s[l]]--;
                l++;
            }
            maxLen = max(maxLen,r-l+1);
        }
        return maxLen;
    }
};
