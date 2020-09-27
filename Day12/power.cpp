//Check if a number is a power of 2 or not in O(1)

#include<bits/stdc++.h>
using namespace std;


// n= 2^P
// complexity= O(P)

void logic1(int n)
{
	int ans= __builtin_popcount(n);

	if(ans==1)
		cout<<"power of 2";
	else
		cout<<"not power of 2";

	return ;
}

void logic2(int n) //recursice O(log n)
{
	 // base case 
    if (n == 0) 
        return 0; 
    else
        return 1 + logic2(n & (n - 1)); 

	return; 
}



int main()
{
	int n;
	cin>>n;

	logic1(n);
	logic2(n);
	return 0;
}
