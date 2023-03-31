class Solution {
public:
    // Hashset - linear
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen_values;
        for (int i = 0; i < nums.size(); ++i) {
            auto findIt = seen_values.find(target - nums[i]);
            if (findIt != seen_values.end()) {
                return {findIt->second, i};
            }

            seen_values[nums[i]] = i;
        }

        return {};
    }

#if 0
    // Brute force - quadratic
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (nums[i] + nums[j] == target)
                    return std::vector<int>{i, j};
            }
        }
        return {};
    }
#endif 
};
