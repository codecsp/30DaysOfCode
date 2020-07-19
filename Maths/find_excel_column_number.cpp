// Given a column title as appear in an Excel sheet, return its corresponding column number.

// For example:

//     A -> 1
//     B -> 2
//     C -> 3
//     ...
//     Z -> 26
//     AA -> 27
//     AB -> 28

// submitted at : https://leetcode.com/problems/excel-sheet-column-number/

class Solution
{
public:
	int titleToNumber(string s)
	{
		int n = s.length();
		reverse(s.begin(), s.end());
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			int mult = s[i] - 65 + 1;
			ans += mult * pow(26, i);
		}
		return ans;

	}
};