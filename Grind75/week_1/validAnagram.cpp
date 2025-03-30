//approach
//// we maintain a hash map to store the frequency of each character in the first string.


class Solution {
    public:
        bool isAnagram(string s, string t) {
            if(s.length() != t.length()) return false;
    
            unordered_map<char, int> mp;
    
            for(auto ele: s){
                mp[ele]++;
            }
    
            for(auto ele:t){
                if(mp.find(ele)== mp.end()) return false;
                mp[ele]--;
                if(mp[ele]<0) return false;
            }
            return true;
        }
    };