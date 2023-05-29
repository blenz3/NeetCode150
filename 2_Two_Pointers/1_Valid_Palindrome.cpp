class Solution {
public:
    bool validCharacter(const char c) {
        return (isalpha(c) || isdigit(c));
    }

    bool isPalindrome(const string& s) {
        size_t start = 0, end = s.length() - 1;
        while (start < end) {
            if (!validCharacter(s[start])) {
                ++start;
                continue;
            } else if (!validCharacter(s[end])) {
                --end;
                continue;
            } 

            if (::tolower(s[start]) != ::tolower(s[end])) {
                return false;
            }

            ++start, --end;
        }

        return true;

    }
};
