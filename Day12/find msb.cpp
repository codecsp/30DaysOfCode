//5. Find MSB in o(1)
/*
Input : 10
Output : 8
Binary representation of 10 is 1010
The most significant bit corresponds
to decimal number 8.

*/

simple solution: 

A simple solution is to one by one divide n by 2 
until it becomes 0 and increment a count while doing this. This count actually represents the position of MSB.


int setBitNumber(int n)
{ 
    if (n == 0) 
        return 0; 
  
    int msb = 0; 
    n = n / 2; 
    while (n != 0)
    { 
        n = n / 2; 
        msb++; 
    } 
  
    return (1 << msb); 
} 


An efficient solution for a fixed size integer (say 32 bits) is to one by one set bits, 
then add 1 so that only the bit after MSB is set. 
Finally right shift by 1 and return the answer. 
This solution does not require any condition checking.



int setBitNumber(int n)  //assuming 32 bit integer
{ 
    // Below steps set bits after 
    // MSB (including MSB) 
  
    // Suppose n is 273 (binary 
    // is 100010001). It does following 
    // 100010001 | 010001000 = 110011001 
    n |= n >> 1;
  
    // This makes sure 4 bits 
    // (From MSB and including MSB) 
    // are set. It does following 
    // 110011001 | 001100110 = 111111111 
    n |= n >> 2; 
  
    n |= n >> 4; 
    n |= n >> 8; 
    n |= n >> 16; 
  
    // Increment n by 1 so that 
    // there is only one set bit 
    // which is just before original 
    // MSB. n now becomes 1000000000 
    n = n + 1; 
  
    // Return original MSB after shifting. 
    // n now becomes 100000000 
    return (n >> 1); 
} 





