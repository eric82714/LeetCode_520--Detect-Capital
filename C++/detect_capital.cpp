class Solution {
public:
    bool detectCapitalUse(string word) {
        bool capital = false;
        
        for(int i = 0; i < word.size(); i++) {
            if(i > 0 and capital == false and isupper(word[i])) return false;
            if(i > 1 and capital == true and islower(word[i])) return false;
            if(isupper(word[i])) capital = true;
            if(islower(word[i])) capital = false;
        }
        
        return true;
    }
};
