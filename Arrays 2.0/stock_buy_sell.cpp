//submitted at leetcode : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// only 1 transaction

class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        // 7, 1, 5, 3, 6, 4
        if (prices.size() <= 1)
            return 0;
        else
        {
            int mini = prices[0];
            int maxi_diff = prices[1] - prices[0];

            for (int i = 1; i < prices.size(); i++)
            {
                if (prices[i] - mini > maxi_diff)
                {
                    maxi_diff = prices[i] - mini;
                }

                if (prices[i] < mini)
                    mini = prices[i];
            }
            if (maxi_diff < 0 )
                maxi_diff = 0;

            return maxi_diff;

        }


    }
};
