//Next Permutation
//submitted at leetcode: https://leetcode.com/problems/next-permutation/

#include<bits/stdc++.h>
class Solution
{
public:
    void nextPermutation(vector<int>& nums)
    {
        int n = nums.size();

        if (n == 1)
            return ;
        else
        {
            int i;
            for ( i = n - 1; i >= 1; i--)
            {
                if (nums[i] > nums[i - 1])
                {
                    break;
                }
            }
            if (i == 0)
            {
                sort(nums.begin(), nums.end());
            }
            else
            {
                --i;
                //i is pointed to the key element
                int j = n-1;
                for(;j>=i;j--)
                {
                    if(nums[j]>nums[i])
                    {
                        break;
                    }
                    // j is the just greate than key element
                }

                swap(nums[i],nums[j]);
                //reverse elements from i+1
                reverse(nums.begin()+i+1,nums.end());

            }
        }


    }
};
