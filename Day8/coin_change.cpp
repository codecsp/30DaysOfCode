class Solution
{
public:
	int coinChange(vector<int>& coins, int amount)
	{

		sort(coin.begin(), coin.end(), greater<int>());
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			ans += amount / coins[i];
			amount = amount % coins[i];
		}
		return ans;
	}
};