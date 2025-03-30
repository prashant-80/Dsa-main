// Leetcode 125. Valid Palindrome
// Approach
// We can use two pointers to check if the string is a palindrome.
// We can ignore non-alphanumeric characters and convert all characters to lowercase.
// We can use the isAlphaNumeric function to check if a character is alphanumeric.
// We can use the tolower function to convert a character to lowercase.


class Solution {
    public:
        bool isAlphaNumeric(char s){
            return (s >= 'a' && s <= 'z') || 
                   (s >= 'A' && s <= 'Z') || 
                   (s >= '0' && s <= '9');
        }
    
        bool isPalindrome(string s) {
            string str = "";
            for(char ele : s){
                if(isAlphaNumeric(ele)){
                    str.push_back(tolower(ele));  
                }
            }
            int i = 0, j = str.size() - 1;
            while(i < j){
                if(str[i] != str[j]) 
                    return false;
                i++;
                j--;
            }
            return true;
        }
    };