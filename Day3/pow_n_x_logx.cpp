// Implement pow(x, n), which calculates x raised to the power n (xn).

// submittted at leetcode : https://leetcode.com/problems/powx-n/

// complexity : log(n)

class Solution
{
public:
	double myPow(double x, int n)
	{
		int nn = abs(n);
		if (n == 0)
			return 1;

		double smallAns = myPow(x, nn / 2);
		smallAns = smallAns * smallAns;

		if (nn & 1)
			smallAns = smallAns * x;

		if (n < 0)
			smallAns = 1.0 / smallAns;

		return smallAns;
	}
};
