// Merge Overlapping Intervals
// Given a set of time intervals in any order,
//       merge all overlapping intervals into one and
//       output the result which should have only
//       mutually exclusive intervals.
//       Let the intervals be represented as pairs of integers for simplicity.
// For example, let the given set of intervals be {{1, 3}, {2, 4}, {5, 7}, {6, 8} } .
// The intervals {1, 3} and {2, 4} overlap with each other, so they should
// be merged and become {1, 4} .
// Similarly {5, 7} and {6, 8} should be merged and become {5, 8}

//submitted at leetcode : https://leetcode.com/problems/merge-intervals/


class Solution
{
public:
    static bool myfunc(vector<int>a, vector<int>b)
    {
        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        int n = intervals.size();

        sort(intervals.begin(), intervals.end(), myfunc);
        if (n <= 1)
            return intervals;
        else
        {
            int index = 0;
            for (int i = 1; i < n; i++)
            {
                if (intervals[i][0] <= intervals[index][1])
                {
                    intervals[index][1] = max(intervals[index][1], intervals[i][1]);
                    intervals[index][0] = min(intervals[index][0], intervals[i][0]);
                }
                else
                {
                    intervals[++index] = intervals[i];
                }
            }

            vector<vector<int>>ans;
            for (int i = 0; i <= index; i++)
            {
                vector<int>tmp;
                int a, b;
                a = intervals[i][0];
                b = intervals[i][1];
                tmp.push_back(a);
                tmp.push_back(b);
                ans.push_back(tmp);
            }

            return ans;

        }
    }
};

