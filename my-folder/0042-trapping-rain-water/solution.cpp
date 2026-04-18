class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxLeft = 0, maxRight = 0, h = 0;
        while (left < right) {
            if (height[left] <= height[right]) {
                if (height[left] > maxLeft) {
                    maxLeft = max(maxLeft, height[left]);
                } else {
                    h += maxLeft - height[left];
                }
                left++;
            } else {
                if (height[right] > maxRight) {
                    maxRight = max(maxRight, height[right]);
                } else {
                    h += maxRight - height[right];
                }
                right--;
            }
        }
        return h;
    }
};
