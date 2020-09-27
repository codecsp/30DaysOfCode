Find square of a number without using multiplication or division operators.

The idea is based on the fact that square root of any number 
n can be calculated by adding odd numbers exactly n times.



1^2 = 1
2^2 = 1+3
3^2 = 1+3+5
4^2 = 1+3+5+7


#include <iostream>
using namespace std;

int findSquare(int num)
{
	int odd = 1;
	int sq = 0;

	// convert number to positive if it is negative
	num = abs(num);

	// add odd numbers num times to result
	while (num--)
	{
		sq = sq + odd;
		odd = odd + 2;
	}

	return sq;
}

int main()
{
	cout << findSquare(8) << " " << findSquare(-4);

	return 0;
}