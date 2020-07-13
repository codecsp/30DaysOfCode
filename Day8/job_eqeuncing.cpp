/*
Maximum Profit in Job Scheduling

We have n jobs, where every job is scheduled to be done from startTime[i] to endTime[i], obtaining a profit of profit[i].

You're given the startTime , endTime and profit arrays, you need to output the maximum profit you can take such that there are no 2 jobs in the subset with overlapping time range.

If you choose a job that ends at time X you will be able to start another job that starts at time X.

Example:

Input: startTime = [1,2,3,3], endTime = [3,4,5,6], profit = [50,10,40,70]
Output: 120
Explanation: The subset chosen is the first and fourth job.
Time range [1-3]+[3-6] , we get profit of 120 = 50 + 70.
*/

/*
TLE submitted at leetcode : https://leetcode.com/problems/maximum-profit-in-job-scheduling/
complexity : O(N^2)

*/

typedef int ll;
class Solution
{
public:
	static bool comp(const vector<int> &v1, const vector<int> &v2)
	{
		return v1[1] < v2[1];
	}

	int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit)
	{
		int n = profit.size();

		vector<vector<int>> jobs(n, vector<int>(3, 0));

		for (int i = 0; i < n; ++i)
			jobs[i] = {startTime[i], endTime[i], profit[i]};

		sort(jobs.begin(), jobs.end(), comp); // Sort the elements by ending time

		for (int i = 0; i < n; i++)
		{
			startTime[i] = jobs[i][0];
			endTime[i] = jobs[i][1];
			profit[i] = jobs[i][2];
		}

		std::vector<int> dp;

		dp = profit;
		int j = 0;
		for (ll i = 1; i < n; i++)
		{
			j = 0;
			while (j != i)
			{
				if (startTime[i] < endTime[j]) //if coverlaps
				{

				}
				else
				{
					dp[i] = max(dp[j] + profit[i], dp[i]);
				}
				j++;
			}
		}

		int ans = 0;

		for (auto num : dp)
		{
			ans = max(ans, num);
		}

		return ans;
	}
};