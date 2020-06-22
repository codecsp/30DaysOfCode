// Given an integer n, return the number of trailing zeroes in n!.

// Example 1:

// Input: 3
// Output: 0
// Explanation: 3! = 6, no trailing zero.

//submitted at : https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution
{
public:
	int trailingZeroes(int n)
	{

		long long int num = 5;
		int ans = 0;
		while ((n / num) > 0)
		{
			ans += n / num;
			num = num * 5;
		}
		return ans;

	}
};