// Longest Substring Without Repeating Characters

// Given a string, find the length of the longest substring without
// repeating characters.

// Example 1:

// Input: "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

// submittd at : https://leetcode.com/problems/longest-substring-without-repeating-characters/


class Solution
{
public:

	int lengthOfLongestSubstring(string s)  // abrexrzx
	{
		int n = s.length();
		if (n <= 1)
			return n;
		int i = 0, j = 0;
		int ans = 0;
		std::map<char, int> cnt_mp;
		while (j != n)
		{
			if (cnt_mp[s[j]] == 0)
			{
				// cout << "i = "<<i<<" ; j = "<< j<<endl;
				cnt_mp[s[j]] = 1;
				ans = max(ans, j - i + 1);
				j++;
			}
			else
			{
				//cout << "else : i = "<<i<<" ; j = "<< j<<endl;
				cnt_mp[s[i]] = 0;
				i++;
			}
		}

		return ans;

	}
};
