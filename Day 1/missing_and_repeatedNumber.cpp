// Given an unsorted array of size n.
// Array elements are in the range from 1 to n.
// One number from set {1, 2, …n} is missing and
// one number occurs twice in the array.
// Find these two numbers.

//gfg : https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


    ll n;
    cin >> n;
    std::vector<ll> arr(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll missing_number = 0;
    ll repeated_number  = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[abs(arr[i]) - 1] > 0)
        {
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        }
        else
            cout << "repeated_number = " << abs(arr[i]);
    }

    for (auto num : arr)
        if (num > 0)
            cout << "\nmissing_number = " << num;


}

