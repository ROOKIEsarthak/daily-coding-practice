class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();
        int write = 0;
        int l = 0;
        while (l < n) {
            char curr = chars[l];
            int count = 0; 
            while (l < n && chars[l] == curr) {
                count++;
                l++;
            } 
            chars[write++] = curr; 
            if (count > 1) {
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[write++] = ch;
                }
            }
        }

        return write;
    }
};
