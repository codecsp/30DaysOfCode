/*
Max Consecutive Ones

Given a binary array, find the maximum number of consecutive 1s in this array.

Example 1:
Input: [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
The maximum number of consecutive 1s is 3.

submitted at : https://leetcode.com/problems/max-consecutive-ones/

*/
class Solution
{
public:
	int findMaxConsecutiveOnes(vector<int>& nums)
	{

		int ans = INT_MIN;
		int local = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0)
			{
				ans = max(local, ans);
				local = 0;
			}
			else
				local++;
		}
		ans = max(ans, local);
		return ans;
	}
};
