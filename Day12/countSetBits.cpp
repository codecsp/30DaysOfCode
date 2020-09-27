//Check total set bits
#include<bits/stdc++.h>
using namespace std;

int count(int n) //library function
{
	return __builtin_popcount(n);
}

int countSetBits(int n) //logn
{ 
    int count = 0; 
    while (n) 
    { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
} 

//using lookup table we can compute in O(1)



int main()
{
	int n;
	cin>>n;



	return 0;
}
