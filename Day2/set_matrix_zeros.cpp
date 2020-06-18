//submitted at leetcode : https://leetcode.com/problems/set-matrix-zeroes/submissions/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        set<int>str;
        set<int>stc;
        
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<m; j++)
                {
                    if(matrix[i][j] == 0)
                    {
                      str.insert(i);
                      stc.insert(j);
                    }
                }
        }
        
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<m ;j++)
                {
                    if(matrix[i][j] == 0)
                    {
                      str.insert(i);
                      stc.insert(j);
                    }
                }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                if(str.find(i)!= str.end() || stc.find(j)!=stc.end())
                {
                    matrix[i][j] = 0;
                }
            }
            
        }
    }
};


