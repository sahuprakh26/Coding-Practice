/*Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 */
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        vector<int> s1_freq(26, 0), s2_freq(26, 0);
        
        int i = 0;
        for(; i < s1.size(); i++) {
    
            ++s1_freq[s1[i] - 'a'];
            ++s2_freq[s2[i] - 'a'];
        }
        
        if(s1_freq == s2_freq)
            return true;
        for(; i < s2.size(); i++) {
            
            --s2_freq[s2[i - s1.size()] - 'a'];
            ++s2_freq[s2[i] - 'a'];
            if(s1_freq == s2_freq)
                return true;
        }
        return false;
    }
};
