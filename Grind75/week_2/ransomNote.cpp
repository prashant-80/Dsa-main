//approach
// Use a hashmap to count characters in magazine, then check if ransom note can be formed

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;
        
        // Count characters in magazine
        for (char c : magazine) {
            charCount[c]++;
        }
        
        // Check if ransom note can be formed
        for (char c : ransomNote) {
            if (charCount[c] <= 0) {
                return false;
            }
            charCount[c]--;
        }
        
        return true;
    }
};
