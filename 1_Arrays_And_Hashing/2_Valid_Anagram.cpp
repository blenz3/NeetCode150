class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::array<int32_t, 26> characterCounts;
        characterCounts.fill(0);

        for (auto c : s) {
            ++characterCounts[static_cast<size_t>(c - 'a')];
        }

        for (auto c : t) {
            --characterCounts[static_cast<size_t>(c - 'a')];
        }

        for (size_t i = 0; i < characterCounts.size(); ++i) {
            if (characterCounts[i] != 0) {
                return false;
            }
        }

        return true;
    }
};
