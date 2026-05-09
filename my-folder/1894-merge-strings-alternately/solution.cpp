class Solution {
public:
    string mergeAlternately(string word1, string word2) { 
        string mergedString = "";
        int m = word1.size();
        int n = word2.size();
        for (int i = 0; i < max(word1.size(),word2.size()); i++) {
            if(i<m){
                mergedString.push_back(word1[i]);
            }
            if(i<n){
                mergedString.push_back(word2[i]);
            }
        }

        return mergedString;
    }
};
