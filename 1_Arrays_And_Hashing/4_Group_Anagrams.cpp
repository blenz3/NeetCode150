class Solution {
public:
    
    std::string getReversedString(const std::string& s) {
        std::string sCopy(s);
        std::sort(sCopy.begin(), sCopy.end());
        return sCopy;
    }

    // Sort each string lexicographically and insert into a map 
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> anagramGroups;

        for (auto& str : strs) {
            anagramGroups[getReversedString(str)].push_back(str);
        }

        std::vector<std::vector<std::string>> anagrams;
        for (auto& [_, group] : anagramGroups) {
            anagrams.push_back(group);
        }

        return anagrams;
    }
};
