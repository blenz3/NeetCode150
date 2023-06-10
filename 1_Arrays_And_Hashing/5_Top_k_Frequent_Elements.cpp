struct CompareT {
    bool operator()(const std::pair<int, int>& lhs, const std::pair<int, int>& rhs) {
        return (lhs.second < rhs.second);
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> frequencies;
        for (auto num : nums) {
            frequencies[num]++;
        }


        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, CompareT> q;
        for (auto& kvp : frequencies) {
            q.push(kvp);
        } 

        std::vector<int> out;
        for (int i = 0; i < k; ++i) {
            auto& top = q.top();
            out.push_back(top.first);
            q.pop();
        }

        return out;
    }
};
