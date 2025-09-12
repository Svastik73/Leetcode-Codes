#include <unordered_map>
#include <string>

class Solution {
public:
    string sortVowels(string s) {
        string sd="AEIOUaeiou";
        unordered_map<char,int>mp;
        mp['A']=0;  mp['E']=1;  mp['I']=2;  mp['O']=3;  mp['U']=4;  
        mp['a']=5;  mp['e']=6;  mp['i']=7;  mp['o']=8;  mp['u']=9;

        int arr[10]={0};
        for(char c:s){
            if(mp.find(c)!=mp.end()) {
                arr[mp[c]]++;
            }
        }

        int ii=0;
        for(int i=0;i<s.length();i++){
            while(ii<10 && arr[ii]==0)ii++; 
            if(ii>=10) break; 
            if(mp.find(s[i])!=mp.end()){
                s[i]=sd[ii];
                arr[ii]--;
            }
        }
        return s;
    }
};
