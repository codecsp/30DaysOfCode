/*
Trapping Rain Water


Given n non-negative integers representing an elevation map where the width
of each bar is 1, compute how much water it is able to trap after raining.

Example:

Input: [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
*/

class Solution
{
public:
	int trap(vector<int>&height)
	{
		int n = height.size();
		if (n <= 2)
			return 0;
		vector<int> preLeft(n, 0);
		vector<int> preRight(n, 0);

		int maxi = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			maxi = max(maxi, height[i]);
			preLeft[i] = maxi ;
		}

		maxi = INT_MIN;
		for (int i = n - 1; i >= 0; i--)
		{
			maxi = max(height[i], maxi);
			preRight[i] = maxi;
		}
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			ans += min(preRight[i], preLeft[i]) - height[i];
		}
		return ans;
	}
};