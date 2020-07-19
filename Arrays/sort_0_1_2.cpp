// Sort an array of 0s, 1s and 2s
// Given an array A[] consisting 0s, 1s and 2s.
// The task is to write a function that sorts the given array.
// The functions should put all 0s first, then all 1s and all 2s
// in last.

//(Inplace)
//submitted at
//https://leetcode.com/problems/sort-colors/submissions/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


class Solution
{
public:
    void sortColors(vector<int>& nums)
    {
        int lo = 0, mid = 0, hi = nums.size() - 1;
        while (mid <= hi)
        {
            if (nums[mid] == 0)
            {
                swap(nums[lo], nums[mid]);
                lo++;
                mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[hi]);
                hi--;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }

        }
    }
};


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    std::vector<int> arr(n, 0);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    Solution s;
    s.sortColors(arr);

    for (int num : arr)
        cout << num << " ";



    // cout << "hds";
}
