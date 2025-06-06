//approach
// Perform binary addition with carry, starting from the least significant bit

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;
        
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            
            result = char(sum % 2 + '0') + result;
            carry = sum / 2;
        }
        
        return result;
    }
};
