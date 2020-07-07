// Given an array containing n distinct numbers taken from
// 0, 1, 2, ..., n, find the one that is missing from the array.

// submmited at leetcode
// https://leetcode.com/problems/missing-number/submissions/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        int n = nums.size();
        int sum   = 0;
        for (int num : nums)
        {
            sum += num;
        }
        int  total = n * (n + 1) / 2;
        return total - sum;
    }
};





