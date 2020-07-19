/*
Permutations

Given a collection of distinct integers, return all possible permutations.

Example:

Input: [1,2,3]
Output:
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]

submitted at leetcode: https://leetcode.com/problems/permutations/
referecne soln  gfg at : https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

*/


class Solution
{
public:
	vector<vector<int>> ans ;
	void func(vector<int>&nums, int l, int r)
	{
		if (l == r)
		{
			ans.push_back(nums);
		}

		for (int i = l; i <= r; i++)
		{
			swap(nums[l], nums[i]);
			func(nums, l + 1, r);
			swap(nums[l], nums[i]);
		}
		return;
	}

	vector<vector<int>> permute(vector<int>& nums)
	{
		int r = nums.size() - 1;
		int l = 0;
		func(nums, l, r);
		return ans;
	}
};