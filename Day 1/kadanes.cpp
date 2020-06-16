// kadanes algotithm
//find maximum from an array


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll kadanes(vector<ll>&arr)
{
    ll meh = 0;
    ll msf = INT_MIN;

    for (ll i = 0; i < arr.size(); i++)
    {
        meh = meh + arr[i];
        if (meh < arr[i])
            meh = arr[i];
        if (msf < meh)
            msf = meh;
    }

    return msf;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n ;
    cin >> n;
    vector<ll>arr(n, 0);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll maxi = kadanes(arr);
    cout << maxi << endl;

}

