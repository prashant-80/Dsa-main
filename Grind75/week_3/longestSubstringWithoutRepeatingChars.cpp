// Approach:
// Use sliding window technique with a hashmap to track character positions
// Time Complexity: O(n) where n is the length of the string
// Space Complexity: O(min(m, n)) where m is the size of the character set

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charMap; // Char -> Index map
        int maxLength = 0;
        int windowStart = 0;
        
        for (int windowEnd = 0; windowEnd < s.length(); windowEnd++) {
            char currentChar = s[windowEnd];
            
            // If character exists in current window, update window start
            if (charMap.find(currentChar) != charMap.end() && charMap[currentChar] >= windowStart) {
                windowStart = charMap[currentChar] + 1;
            }
            
            // Update character position
            charMap[currentChar] = windowEnd;
            
            // Update max length
            maxLength = max(maxLength, windowEnd - windowStart + 1);
        }
        
        return maxLength;
    }
};
