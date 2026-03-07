class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        long long int totalLength = word1.size() + word2.size();
        int word1Pointer = 0, word2Pointer = 0;
        string newWord;
        for (int i = 0; i < totalLength; i++) {
            if (word1[word1Pointer]) {
                newWord += word1[word1Pointer];
                word1Pointer += 1;
            }
            if (word2[word2Pointer]) {
                newWord += word2[word2Pointer];
                word2Pointer += 1;
            }
        }
        return newWord;
    }
};
