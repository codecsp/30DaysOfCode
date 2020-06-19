// Pascals Traingle
//submitted at leetcode:https://leetcode.com/problems/pascals-triangle/
 
class Solution
{
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> arr ;
        for(int i=0;i<numRows;i++)
        {
            std::vector<int> tmp;
            for(int j=0;j<=i;j++)
            {
                if(j == 0 || j==i)
                {
                    tmp.push_back(1);
                }
                else
                {
                    int num = arr[i-1][j]+arr[i-1][j-1];
                    tmp.push_back(num);
                }
            }
            arr.push_back(tmp);
        }
        
        return arr;
    }
};

