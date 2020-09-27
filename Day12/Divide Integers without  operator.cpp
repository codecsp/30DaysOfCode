//Divide Integers without / operator

#include <bits/stdc++.h> 
using namespace std; 

int divide(int dividend, int divisor)  //O(dividend)
{

	int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1; 

	dividend = abs(dividend); 
	divisor = abs(divisor); 

	int quotient = 0; 
	while (dividend >= divisor) 
	{
		dividend -= divisor; 
		++quotient; 
	} 

	return sign * quotient; 
} 

// Driver code 
int main() { 
int a = 10, b = 3; 
cout << divide(a, b) << "\n"; 

a = 43, b = -8; 
cout << divide(a, b); 

return 0; 
} 
