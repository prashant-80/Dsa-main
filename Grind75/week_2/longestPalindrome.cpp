//approach
// Count character frequencies, use pairs for the palindrome and at most one single character in the middle

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charCount;
        
        for (char c : s) {
            charCount[c]++;
        }
        
        int length = 0;
        bool hasOdd = false;
        
        for (auto& pair : charCount) {
            if (pair.second % 2 == 0) {
                length += pair.second;
            } else {
                length += pair.second - 1;
                hasOdd = true;
            }
        }
        
        return length + (hasOdd ? 1 : 0);
    }
};
