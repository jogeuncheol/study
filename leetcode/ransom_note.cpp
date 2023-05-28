class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alpha[26] = {0};
        for (char m : magazine)
            alpha[m - 'a']++;
        for (char r : ransomNote)
        {
            if (!alpha[r - 'a']--)
                return false;
        }
        return true;
    }
};