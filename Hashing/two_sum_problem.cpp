// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// Example:

// Given nums = [2, 7, 11, 15], target = 9,

// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].

//submitted at : https://leetcode.com/problems/two-sum/

typedef int ll;
class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{

		ll n = nums.size();
		std::map<int, int> mp;
		std::vector<int> ans;
		for (int i = 0; i < n; i++)
		{
			int remian = target - nums[i];
			if (mp[remian] != 0)
			{
				ans.push_back(i);
				ans.push_back(mp[remian] - 1);
				break;
			}
			mp[nums[i]] = i + 1;
		}

		return ans;
	}
};