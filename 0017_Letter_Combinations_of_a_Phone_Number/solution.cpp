class Solution {
public:
    vector<string> ans;

    vector<string> mapping = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void backtrack(string &digits, int index, string curr) {

        if (index == digits.size()) {
            ans.push_back(curr);
            return;
        }

        string letters = mapping[digits[index] - '0'];

        for (char ch : letters) {
            backtrack(digits, index + 1, curr + ch);
        }
    }

    vector<string> letterCombinations(string digits) {

        if (digits.empty())
            return {};

        backtrack(digits, 0, "");

        return ans;
    }
};