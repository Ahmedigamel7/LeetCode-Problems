class Solution {
public:
    int lengthOfLastWord(string s) {
        int lenght = 0;
    for (int i = s.size()-1; i >= 0; i--)
    { 
        if (s[i] == ' ' && lenght)
            break;
        else if (s[i] == ' ')
            continue;
        else 
            ++lenght;    
    }
    return lenght;
    }
};