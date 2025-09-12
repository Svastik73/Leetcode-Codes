class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size(); int m=grid[0].size();
        int i=0;int j=0;
        vector<int>ans;
        for(int k=0;k<n;k++){  // fill bottom left corner
            ans.clear();
            i=k; j=0;
            while(i<n && j<m){
              ans.push_back(grid[i][j]);
              i++; j++;
            }
            i=k; j=0;
            sort(ans.rbegin(),ans.rend()); //descending order
            while(i<n && j<m){
              grid[i][j]=ans[j];
              i++; j++;
            }
        }

          for(int k=1;k<m;k++){  // upper right corner
            ans.clear();
            i=0; j=k;
            while(i<n && j<m){
              ans.push_back(grid[i][j]);
              i++; j++;
            }
            i=0; j=k;
            sort(ans.begin(),ans.end()); //descending order
            while(i<n && j<m){
              grid[i][j]=ans[i];
              i++; j++;
            }
        }
            return grid;
    }
};