// Given an array nums of n integers and an integer target, are there elements a, b, c, and d in nums such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.

// Note:

// The solution set must not contain duplicate quadruplets.

// Example:

// Given array nums = [1, 0, -1, 0, -2, 2], and target = 0.

// A solution set is:
// [
//   [-1,  0, 0, 1],
//   [-2, -1, 1, 2],
//   [-2,  0, 0, 2]
// ]

// submitted at : https://leetcode.com/problems/4sum/

class Solution
{
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target)
	{
		int n = nums.size();
		sort(nums.begin(), nums.end());
		vector<vector<int>> ans;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				int left = j + 1;
				int right = n - 1;

				while (left < right)
				{
					int sum = nums[i] + nums[j] + nums[left] + nums[right];
					if (sum == target)
					{
						std::vector<int> tmp;
						tmp.push_back(nums[i]);
						tmp.push_back(nums[j]);
						tmp.push_back(nums[left]);
						tmp.push_back(nums[right]);
						ans.push_back(tmp);

						int left_value = nums[left];
						while (left < n && nums[left] == left_value)
						{
							left++;
						}
						int right_value = nums[right];
						while (right > left && right_value == nums[right])
						{
							right--;
						}
					}
					else if (sum < target)
					{
						left++;
					}
					else
					{
						right--;
					}
				}
				while ( (j + 1) < n && nums[j + 1] == nums[j])
				{
					j++;
				}
			}

			while ( (i + 1) < n && nums[i + 1] == nums[i])
			{
				i++;
			}
		}

		return ans;
	}
};