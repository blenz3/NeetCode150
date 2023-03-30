class Solution {
public:
    // Use a hash set
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> encounteredNumbers;
        for (auto num : nums) {
            auto [_, inserted] = encounteredNumbers.insert(num);
            if (!inserted) {
                return true;
            }
        }

        return false;
    }
};
