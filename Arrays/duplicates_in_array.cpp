// Given an array of n elements which contains elements from 0 to n-1,
// with any of these numbers appearing any number of times.
// Find these repeating numbers in O(n) and
// using only constant memory space.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n;
    cin >> n;
    std::vector<ll> arr(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        //ll tmp;
        cin >> arr[i];
        //arr.push_back(tmp);
    }
    // put -i on respective positions if you find it
    // since arr[i] <6
    for (ll i = 1; i <= n; i++)
    {
        if ( arr[abs(arr[i])] >= 0 )
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
    }

    return 0;
}