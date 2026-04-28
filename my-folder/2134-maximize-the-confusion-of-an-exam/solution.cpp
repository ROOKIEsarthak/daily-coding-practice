class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int l = 0 , r = 0 , maxLen = 0 , maxFreq = 0;
        unordered_map<char,int>ump;
        for( r=0 ; r<answerKey.size() ; r++){
            ump[answerKey[r]]++;
            maxFreq = max(maxFreq,ump[answerKey[r]]);
            while((r-l+1) - maxFreq > k){
                ump[answerKey[l]]--;
                l++;
            }
            maxLen = max(maxLen,r-l+1);
        }
        return maxLen;
    }
};
