class Solution {
public:
    vector<vector<int>> ans;

    void kSum(vector<int>& nums, long long target, int start, int k, vector<int>& path) {

        // Base case 
        if (k == 2) {
            int left = start;
            int right = nums.size() - 1;
            while (left < right) {
                long long sum = (long long)nums[left] + nums[right];
                if (sum < target) {
                    left++;
                } else if (sum > target) {
                    right--;
                } else {
                    vector<int> temp = path;
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    ans.push_back(temp);
                    int leftVal = nums[left];
                    int rightVal = nums[right];
                    while (left < right && nums[left] == leftVal) {
                        left++;
                    }
                    while (left < right && nums[right] == rightVal) {
                        right--;
                    }
                }
            }
            return;
        }

        // Recursive case
        for (int i = start; i + k <= nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) continue;
            path.push_back(nums[i]);
            kSum(nums, target - nums[i], i + 1, k - 1, path);
            path.pop_back();
        }
    }

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> path;
        kSum(nums, target, 0, 4, path);
        return ans;
    }
};
