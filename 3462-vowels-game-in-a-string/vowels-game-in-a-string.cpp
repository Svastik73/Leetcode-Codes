class Solution {
public:
    bool doesAliceWin(string s) {
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') c++;
        }
        if(c==0) return false; 
        else return true;
    }
};