class Solution {
public:
    void reverseString(vector<char>& s) {
        char c ;
        int start=0,end=s.size()-1;
        while(start<=end){
            c = s[start];
            s[start] = s[end];
            s[end]=c;
            start++;
            end--;
        }
    }
};
