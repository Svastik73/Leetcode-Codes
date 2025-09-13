class Solution {
public:
    int maxFreqSum(string s) {
        string vow="aeiou";
        set<char>stk;
        for(int i=0;i<5;i++){
            stk.insert(vow[i]);
        }
        unordered_map<char,int>vv,cc;
        for(int i=0;i<s.length();i++){
            if(stk.find(s[i])!=stk.end() )
            {
                vv[s[i]]++;
            }
            else cc[s[i]]++;        
        }
        int larv=0;int larc=0;
        for(auto e:vv){
            if(e.second>larv) larv=e.second;
        }
         for(auto e:cc){
            if(e.second>larc) larc=e.second;
        }

        return larv+larc;
    }
};