// Given an unsorted array of integers, find the length of the
// longest consecutive elements sequence.

// Your algorithm should run in O(n) complexity.

// Example:

// Input: [100, 4, 200, 1, 3, 2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4].
// Therefore its length is 4.

//submitted at leetcode: https://leetcode.com/problems/longest-consecutive-sequence/

class Solution
{
public:
	int longestConsecutive(vector<int>& nums)
	{
		int n = nums.size();

		if (n == 0)
			return 0;
		std::map<int, int> mp;

		for (int i = 0; i < n; i++)
		{
			mp[nums[i]] = i;
		}

		std::map<int, int> ans_map;
		int maxi = INT_MIN;
		for (auto ele : mp)
		{
			int first = ele.first;

			if (ans_map[first - 1] != 0)
			{
				ans_map[first] = ans_map[first - 1] + 1;
				maxi = max(maxi, ans_map[first]);

			}
			else
			{
				ans_map[first] = 1;
				maxi = max(maxi, ans_map[first]);
			}
		}

		return maxi;

	}
};