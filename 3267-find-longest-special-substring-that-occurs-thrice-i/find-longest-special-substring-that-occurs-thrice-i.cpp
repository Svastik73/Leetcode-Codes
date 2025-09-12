class Solution {
public:
    int maximumLength(string s) {
        int n=s.length();
        int l=1; int r=n-2; int mid;
        unordered_map<string,int>mp; string str="";
        string tm;
        int flg=0;
        while(l<=r){
            mp.clear();
            mid=l+(r-l)/2;
            for(int i=0;i<=n-mid;i++){
                tm=s.substr(i,mid);
                flg=0;
                for(int y=0;y<tm.length();y++){
                    if(tm[0]!=tm[y]){
                        flg=1;
                        break;
                    }
                }
                if(flg==0) mp[tm]++;
            }
            for(auto e:mp){
                if(e.second>=3){
                    str=e.first;
                    l=mid+1;
                    break;
                }
            }
            if(l!=mid+1) r=mid-1;
        }
        return str.length()!=0?str.length():-1;
    }
};